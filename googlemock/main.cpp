#include<iostream>
#include"order.h"
#include"dbmock.h"
#include"gtest/gtest.h"
#include"gmock/gmock.h"
/**************
gcc main.cpp -o main -lstdc++ -lgtest -lgmock

***************/
TEST(TestFunSum, ZeroArg){
  EXPECT_EQ(sum_mod(0,0),0);
}

TEST(TestFunSum, NegativeArg){
  EXPECT_EQ(sum_mod(-1,-1),2);
}

TEST(TestOrder, CheckZero){
  database_mock db;
  //EXPECT_CALL(db, sqlquery(::testing::_, ::testing::_))
    //.Times(::testing::AnyNumber())
    //.Times(1)
    //.WillOnce(::testing::Return(false));
  
  order<database_mock> my_order(db);
  my_order.check(0);
}

TEST(TestOrder, Disconnect){
  database_mock db;
  EXPECT_CALL(db, disconnect())
    .Times(2);

  order<database_mock> my_order(db);
  my_order.goodby();
}

int main(int argc, char** argv){

  ::testing::InitGoogleTest(&argc, argv);
  ::testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}
