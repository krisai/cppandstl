
#include <stdio.h>
int main(){
	int val[5] = { 1, 5, 2, 1, 3 };
	printf("val     =%p\n", val);
	printf("val+1   =%p\n", val+1);
	printf("&val[2] =%p\n", &val[2]);
	printf("val[5]  =%d\n", val[5]); //-->???
	printf("*(val+1)=%d\n", *(val+1));
	
	
	int arr1[3];
	int arr2[3];
	int arr3[3];
	int arr4[6];
	int arr5[1];
	int arr6[] = {1};

	int(*a1)[3];
	a1 = &arr1;

	int*(a2[3]);
	int*a3[3];
	a2[1] = &arr4;
	a2[0] = &arr5;
	a2[2] = &arr6;

	a3[1] = &arr1;
	a3[0] = &arr1;
	a3[2] = &arr1;


	return 0;
}


