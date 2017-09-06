#include <iostream>
using namespace std;

struct W  
{  
private:
	int i1,i2;
public:
   W(int&j, int&k):i1(j),i2(k) {}  
   void p(){cout<<i1<<" "<<i2<<endl;}
};  

struct X  
{  
   X(const int&, int&) {}  
};  

struct Y  
{  
   Y(int&, const int&) {}  
};  

struct Z  
{  
   Z(const int&, const int&) {}  
};

template <typename T, typename A1, typename A2>  
T* factory(A1& a1, A2& a2)  
{  
   return new T(a1, a2);  
}
template <typename T, typename A1, typename A2>  
T* factory(A1&& a1, A2&& a2)  
{  
   return new T(std::forward<A1>(a1), std::forward<A2>(a2));  
}

int main(int argc, char const *argv[])
{
	// int a = 4, b = 5;  
	// W* pw = factory<W>(a, b);
	// pw->p();
	// Z* pz = factory<Z>(2, 2);
	
	int a = 4, b = 5;  
	W* pw = factory<W>(a, b);  
	X* px = factory<X>(2, b);  
	Y* py = factory<Y>(a, 2);  
	Z* pz = factory<Z>(2, 2);  

	delete pw;  
	delete px;  
	delete py;  
	delete pz; 


	return 0;
}

