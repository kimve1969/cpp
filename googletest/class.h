template<typename E>
class A{
 public:
  A(const E &x):m_x(x){}
  E add(const E &x){
    return m_x+=x;
  }
 private:
  E m_x; 
};
