
#include <iostream>
using namespace std;


class A{
	int x;
public:
	A(int i):x(i){}
	friend void f(const A& a);
};

void f(const A& a){
	cout<<a.x<<endl;
};
int main(int argc, char const *argv[])
{

	A a=1;
	f(a);
	return 0;
}

