#include<string>
#include<stdio.h>
#include<iostream>

template<typename D/*database type*/>
class order{
 public:
 order(const D& _db):m_db(_db){}
 virtual ~order(){}
 bool check(int n){
   std::string responce;
   bool bres = m_db.sqlquery(std::string("select n_order from oder_table where n_order=")+std::to_string(n), responce);
   return bres;
 }
 void goodby(){
   std::cout<<"Goodby!\n";
   m_db.disconnect();
 }
 
 private:
  D m_db;
};

int sum_mod(int a, int b){
   return abs(a)+abs(b);
 }
