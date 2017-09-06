#include <stdio.h>  
template <class T> class X  
{  
public:  
   void f(typename T::myType* mt) {
   	mt->p();
   }  
};  
  
class Yarg  
{  
public:  
   struct myType { 
   		void p()
		{
			printf("%s\n", "asdsadasdasd");
		}   
	};  
};  
  
int main()  
{  
   X<Yarg> x;  
   x.f(new Yarg::myType());  
   printf("Name resolved by using typename keyword.\n");  
}  