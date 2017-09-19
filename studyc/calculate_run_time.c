#include <time.h>
#include <stdio.h>
clock_t start, end;
double cpu_time_used;
int main(int argc, char const *argv[])
{
	start = clock();
	int p,l;
	p=10;
	l=100;

	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("%f\n", cpu_time_used);
	return 0;
}
