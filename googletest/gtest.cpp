#include<iostream>
#include<gtest/gtest.h>
#include"func.h"
#include"class.h"
// Install Google Test: apt install gtest
// Compiling: gcc gtest.cpp func.cpp -o gtest -lstdc++ -lgtest
// You can run test with parameter, example:
//      ./gtest --help
//      ./gtest --gtest_repeat=10
//      ./gtest --gtest_output=xml:gtest.xml

TEST(TestSum, Input_Negative_First_Parameter){
  EXPECT_EQ(sum(-1,0),1);
}

TEST(TestSum, Input_Negative_Second_Parameter){
  //EXPECT_EQ(sum(0,-1),1);
  ASSERT_EQ(sum(0,-1),1);
}

TEST(TestSum, Input_Negative_Both_Parameter){
  EXPECT_EQ(sum(-1,-1),2);
}

TEST(Test_Add_Postfix, Empty){
  EXPECT_EQ(add_postfix(""),"")<<"Is not empty!";
}

TEST(Test_Class, AddZero){
  A<int> a1(1);
  EXPECT_EQ(a1.add(0), 0)<<"Add zero!";
  A<double> a2(2.1);
  EXPECT_EQ(a2.add(1.5), 3.6)<<"Should be 3.6!";
}

class Test_Class_F: public ::testing::Test{
  protected:
  Test_Class_F(){
    std::cout<<"cnst Test_Class_F()\n";
  }
  ~Test_Class_F() override{
    std::cout<<"dst ~Test_Class_F()\n";
  }
  void SetUp() override{
    std::cout<<"call SetUp()\n";
  }
  void TearDown() override{
    std::cout<<"call TearDown()\n";
    }
};

TEST_F(Test_Class_F, AddNumber){
  A<int> a1(2);
  EXPECT_EQ(a1.add(3),6)<<"2 add 3 is not 5!";
}
  
int main(int argc, char** argv){
  testing::InitGoogleTest(&argc, argv);
  std::cout<<"Start\n";
  std::cout<<"Stop\n";
  return RUN_ALL_TESTS();
}
