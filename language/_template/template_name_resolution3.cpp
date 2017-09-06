#include <iostream>  
using namespace std;  


// template_name_resolution3.cpp  
template <class T> class A {  
   A* a1;   // A refers to A<T>  
   A<int>* a2;  // A<int> refers to a specialization of A.  
   A<T*>* a3;   // A<T*> refers to the partial specialization A<T*>.  
};  
  
template <class T> class A<T*> {  
   A* a4; // A refers to A<T*>.  
};  
  
template<> class A<int> {  
   A* a5; // A refers to A<int>.  
};
// template_name_resolution4.cpp  
template <class T>  
class Base1 {};  
  
template <class T>  
class Derived1 : Base1<T> {};  

// template_name_resolution5.cpp    
template <class T> class C {  
public:  
   struct Z {  
      Z() { cout << "Z::Z()" << endl; }  
   };  
   void f();  
};  
  
template <class K>  
void C<K>::f() {  
   // Z refers to the struct Z, not to the template arg;  
   // Therefore, the constructor for struct Z will be called.  
   Z z;  
}  


// template_name_resolution6.cpp 
namespace NS {  
   void g() { cout << "NS::g" << endl; }  
  
   template <class T> struct C {
      void f();  
      void g() { cout << "C<T>::g" << endl; }  
   };  
};  
  
template <class T>  
void NS::C<T>::f() {  
   g(); // C<T>::g, not NS::g  
};  
  
// template_name_resolution7.cpp  
struct B {  
   int i;  
   void print() { cout << "Base" << endl; }  
};  
  
template <class T, int i> struct D : public B {  
   void f();  
};  
  
template <class TT, int i>  
void D<TT, i>::f() {  
   TT b;   // Base class b, not template argument.  
   b.print();  
   i = 1; // Set base class's i to 1.  
}  
// template_name_resolution9.cpp  
// compile with: /EHsc  

void f(int, int) { cout << "f(int, int)" << endl; }  
void f(char, char) { cout << "f(char, char)" << endl; }  
  
template <class T1, class T2>  
void f(T1, T2)  
{  
   cout << "void f(T1, T2)" << endl;  
};  

// template_name_resolution10.cpp  
// compile with: /EHsc   
  


int main(int argc, char const *argv[])
{

	// template_name_resolution4.cpp  
	Derived1<int> d;  
	// template_name_resolution5.cpp 
	C<int> c;  
	c.f();
// template_name_resolution6.cpp 
	NS::C<int> cc;  
	cc.f();
// template_name_resolution7.cpp 
	D<B, 1> dd;  
	dd.f();  
	cout << dd.i << endl;  

// template_name_resolution9.cpp  
  f(1, 1);   // Equally good match; choose the nontemplate function.  
   f('a', 1); // Chooses the template function.  
   f<int, int>(2, 2);  // Template arguments explicitly specified.  


    long l = 0;  
   int i = 0;  
   // Call the template function f(long, int) because f(int, int)  
   // would require a conversion from long to int.  
   f(l, i);  	
	return 0;
}