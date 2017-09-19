#include <iostream>
using namespace std;
class A{
private:
	const int i;  //const成员变量必需在initialized list里面初始化
public:
	A():i(10){}
	void f(){cout<<" f()"<<endl;}
	void f()const{cout<<"const f()"<<endl;}
};
int main(int argc, char const *argv[])
{
	
	const A a;
	a.f();
	return 0;
}


