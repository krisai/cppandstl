#include <iostream>  
using namespace std;  

class A{
private:
	int i;
	int k;
	const int l;
public:
	A():i(11),k(22),l(33){}
	void pp(){
		cout<<i<<" "<<k<<" "<<l<<endl;
	}
	// void setl(int j){
	// 	l=j;
	// }
};

int main(int argc, char const *argv[])
{
	A a;
	int *p = (int *)&a;
	a.pp();
	(*p)++;
	a.pp();
	p++;
	p[0]=0;
	*p=1;
	a.pp();
	p++;
	*p=2;  //连const variable都可以改
	a.pp();
	// a.setl();
	// int m = 0;  
 //   	int n = 0;  
 //   	[&m,n] (int a) mutable { m = ++n + a; }(4);  
 //   	cout << m << endl << n << endl;  
	return 0;
}