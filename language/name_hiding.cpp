#include <iostream>
using namespace std;


//Pointer-to-Member Operators: .* and ->*
class Base  
{  
public:  
virtual void Print();  
};  
void (Base ::* bfnPrint)() = &Base::Print;

void Base::Print(){
  cout << "Print function for class Base\n";  
}  


class A{
private:
  int i;
public:
  A(int ii):i(ii){cout<<"A::A(ii)"<<i<<endl;};
  // A(){cout<<"A::A()"<<i<<endl;}
  ~A(){
    cout<<"A::~A()"<<endl;
  };

  void p(){
    Base   *bPtr;  
    Base    bObject;  
    bPtr = &bObject;    // Set pointer to address of bObject.  
    (bPtr->*bfnPrint)(); 
    (bObject.*bfnPrint)(); 
  }
  void print(){cout<<"A::print()"<<endl;} //name hiding
  void print(int k){cout<<"A::print(int)"<<endl;} //name hiding
};
class B:public A{
public:
  B():A(12){cout<<"B::B()"<<endl;}
  ~B(){cout<<"B::~B()"<<endl;}
  void pp(){
    p();
  }
  void print(){cout<<"B::print()"<<endl;}  //name hiding
};

int main(int argc, char const *argv[])
{
  B b;
  b.p();
  b.print();
  // b.print(2);
  return 0;
}




