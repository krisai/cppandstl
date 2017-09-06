#include <iostream>
using namespace std;
class A{
int i;
public:
	A():i(10){}
	virtual ~A(){cout<<"AAAA::~A()"<<endl;}
	virtual void f(){cout<<"AAAA "<<i<<endl;}
	void p(){cout<<"AAAA::p() "<<i<<endl;}
};
class B:public A{

public:
	B():j(9){cout<<"BBB::B() "<<j<<endl;}
	~B(){cout<<"BBB::~B()"<<endl;};
	void f(){cout<<"BBBBB"<<endl;}
	void p(){
		cout<<"BBB::p() "<<endl;
		A::p();		//Explicit Overrides
	} 
	int j;
};


int main(int argc, char const *argv[]){
	
	// A a;
	// cout<<sizeof(a)<<endl;
	// int *p = (int *)&a;
	// p++;
	// p++;
	// cout<<*p<<endl;

	
	// a=*(new B);
	// a.f();  // cannot implement dynamic binding
	// a.p();

	// A *ap2 = new B;//pointer can implement dynamic binding
	// ap2->f();
	// ap2->p();
	// delete ap2; //manual call destructor by delete



	B b;
	b.p();
	// A &ar2 = b; //reference can also implement dynamic binding
	// ar2.f();  
	// ar2.p();
	//destructor automatic involved by gc

	return 0;
}





