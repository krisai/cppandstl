#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int a[10]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
	int thisSum=0,maxSum=0;
	for (int i = 0; i < sizeof(a)/sizeof(int); ++i)
	{
		thisSum+=a[i];
		if (thisSum>maxSum)
			maxSum=thisSum;
		else if (thisSum<0)
		{
			thisSum=0;
		}
		
		/* code */
	}
	cout<<maxSum<<endl;
	return 0;
}
