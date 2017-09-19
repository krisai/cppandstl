#include <iostream>
using namespace std;
template <typename T>
void ff(T t){cout<<t<<endl;}

template <typename T>
void ff(){T t(0);cout<<t<<endl;}
//--------------------------------------------------------

template <typename T,int i>
class A{
	T t;
public:
	template  A<T,i>;
	A(){}
	~A(){}
	template<typename U>  
   	void mf(const U &u); 
	void p(){cout<<i<<endl;}
	T gett()const{return t;}
};
template<typename T,int i>
template <typename U>
void A<T,i>::mf(const U &u)  
{  
};
//--------------------------------------------------------

template<typename... Arguments> class vtclass{};  

vtclass< > vtinstance1;  
vtclass<int> vtinstance2;  
vtclass<float, bool> vtinstance3; 

//--------------------------------------------------------


// function_template_instantiation.cpp 
template<class T> void f(T) { }  

// Instantiate f with the explicitly specified template.  
// argument 'int'  
//  
template void f<int> (int);  

// Instantiate f with the deduced template argument 'char'.  
template void f(char);  
//--------------------------------------------------------

// explicit_specialization.cpp  
template<class T> void f1(T t)  
{  
};  

// Explicit specialization of f with 'char' with the  
// template argument explicitly specified:  
//  
template<> void f1<char>(char c)  
{  
}  

// Explicit specialization of f with 'double' with the  
// template argument deduced:  
//  
template<> void f1(double d)  
{  
} 

//--------------------------------------------------------

int main(int argc, char const *argv[]){

A<bool,2> a;
cout<<typeid(a).name()<<endl;
a.p();

ff<int>(1);
ff(1);
ff<int>();

f(1);
f('w');


	return 0;
}





