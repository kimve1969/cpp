#include<iostream>

long long gvar = 0;

void f(int i){
  gvar += i;
}

void g(int i){
  gvar -= i;
  if(i%2) f(i);
}

struct A{
  A(){}
  ~A(){}
};

int main(int argc, char* argv[]){
  std::cout<<"Start\n";

  for(int i=0; i< 1'000'000; i++){
    g(i);
    if(i%5) A a;
  }
  
  std::cout<<"gvar == "<<gvar<<std::endl;
  std::cout<<"End\n";
  return 0;
}
