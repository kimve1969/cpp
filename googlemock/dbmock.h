#include"gmock/gmock.h"
#include<string>

class database_mock{
 public:
  database_mock()=default;
  database_mock(const database_mock& db){};
  MOCK_METHOD(bool, sqlquery, (std::string const& sql, std::string&res) );
  MOCK_METHOD(void, disconnect, ());
};
