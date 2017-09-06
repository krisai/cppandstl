#include <iostream>
using namespace std;

class Base
{
public:
	Base(){};
	~Base(){cout<<"Base::~Base()"<<endl;};
	virtual void f(){cout<<"Base::f()"<<endl;};
	virtual void f(int i,float k){cout<<"Base::f(int)"<<endl;};
};
class D:public Base
{
public:
	D(){};
	~D(){cout<<"D::~D()"<<endl;};
	virtual void f(){cout<<"D::f()"<<endl;}
	// virtual void f(int){cout<<"D::f(int)"<<endl;}
};

const int *fp(const int* i){
	 // int* ip=nullptr;
	return i;
}
const int &fr(const int& ii){
	// int i;
	return ii;
}

int main(int argc, char const *argv[])
{
	Base * b=new D;
	b->f();
	b->f(2,2.3);
	// free(b);
	delete b;
	return 0;
}

