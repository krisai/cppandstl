#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	

	//1. 不能通过指针修改指向地址上的值，但是指针可以指向别的地址
	const int i1=10;
	const int i2=20;
	const int * p1 = &i1;  //pointer to const char   
	p1=&i2;
	p1++;
	*p1++; //*(p1++);  // 执行顺序是从右向左，遇到括号会改变

	// (*p1)++; // errer
	
	//这里和上面一样，
	const int i3=1;
	const int i4=2;
	int const * p2 = &i3; //pointer to const char   
	p2=&i3;
	*p2++;
	// (*p2)++; // errer

	//2. 可以通过指针修改所指向地址上的值，但是指针不能指向其他地址了
	int i5=1,i6=2;
	int* const p3=&i5; //const pointer to char   
	(*p3)++;
	++*p3; //++(*p3); // 执行顺序是从右向左，遇到括号会改变

	// p3++; //error


	//3. 该指针既不能指向别的地址也不能修改地址上的值
	const int i7=1,i8=2;
	const int * const p4=&i7; //const pointer to const char  
	// (*p4)++; //error
	// p4++; //error

	return 0;
}