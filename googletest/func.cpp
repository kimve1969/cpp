#include "func.h"
#include<cstdlib>

int sum(int a, int b){
  return std::abs(a)+std::abs(b);
}

std::string add_postfix(const std::string &str){
  return std::string(str)+"_add_postfix";
}
