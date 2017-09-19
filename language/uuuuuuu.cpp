#include <functional>  

#include <iostream>
// using namespace std;

class BaseClass{  
public:  
    BaseClass(int n) :m_int(n){std::cout<<"sadasdasd"<<std::endl;} // m_int is direct initialized  
     void setkk(int m){kk=m;}
     void getkk(){std::cout<<kk<<std::endl;}
private:  
    int m_int;
    static int kk;
};  
int BaseClass:: kk = 0;
class DerivedClass : public BaseClass{
public:  
    // BaseClass and m_char are direct initialized  
    DerivedClass(int n, char c) : BaseClass(n), m_char(c) {}  
private:  
    char m_char;  
};

typedef void(*Mf)();
void ff(Mf mf){
    mf();
};



int main(){
    BaseClass bc1(5);  
    BaseClass bc2=5;
    bc2.setkk(22);
    bc1.getkk();
    // BaseClass::getkk(22);
    // BaseClass* bc22; 
    // DerivedClass dc1{ 1, 'c' };  
    // BaseClass* bc2p = new BaseClass(7);  
    // BaseClass bc3 = static_cast<BaseClass>(dc1);

    // ff([](){std::cout<<"mf"<<std::endl;});
    // int a = 1;
    // std::function<int()> func = [a](){  return a + 1; }; // a is direct initialized  
    // int n = func();

}