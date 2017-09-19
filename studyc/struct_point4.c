#include <stdio.h>
typedef void(*fp)();
void f(char* c){printf("%s\n", c);};
struct A
{
	int i;
	// float f;
	fp fp1;
	struct B
	{
		// int k;
		// int i;
		// float ff;
		
	}b;
};
int main(int argc, char const *argv[])
{
	struct A a;
	a.fp1=f;
	a.fp1("sadsadas");
	printf("%lu\n", sizeof(a));
	return 0;
}