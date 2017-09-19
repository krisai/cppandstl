//
// Created by leagan on 20/07/2017.
//

#include <iostream>
using namespace std;
/*
hidden
persistent
静态成员函数只能访问静态成员
静态成员所有类的实例共享
*/
class A
{
public:
	A(){}
	A(int ii):i(ii){}
	void p(){}
	static void p(int){}
	static void getk(){cout<<k<<endl;p(1);}
	void operator +(A&x){
		i=i+x.i;
	}
	~A(){}
// private:
	int i;
	static int k;
};
int A::k=10;
void operator-(A&x,A&y){
	x.i=x.i-y.i;
}
int main(int argc, char const *argv[])
{
	A a(A::k);
	A b(A::k);
	a+b;
	operator-(a,b);
	cout<<a.i<<endl;
	A::getk();
	return 0;
}
