#include <stdio.h>



int main(){
	int ii = 123;
	int arr1[3] = { 1, 2, 3 };
	int arr11[33] = { 1, 2, 3 };
	int arr111[22] = { 1, 2, 3 };
	int* arrp,*arrp1;
	arrp = arr1;
	arrp1 = &ii;
	printf("arrp1[0]    = %d\n", arrp1[0]); //-->123 arrp1[0]== *arrp1
	printf("*arrp1      = %d\n", *arrp1); //-->123 arrp1[0]== *arrp1

	puts("");
	printf("sizeof(arr1)	= %d\n", sizeof(arr1));//-->12
	printf("sizeof(arrp)	= %d\n", sizeof(arrp));//-->4
	printf("*arr1			= %d\n", *arr1);//-->1 ==arr1[0]
	printf(" *(arr1+1)		= %d\n", *(arr1+1));  //-->2 ==arr1[1]
	printf("*arrp			= %d\n", *arrp); //-->1 ==arr1[0]
	printf(" *(arrp + 1)	= %d\n", *(arrp + 1));  //-->2 ==arr1[1]

	puts("");
	//unallocated int
	int *arr2[3]; //same as arr4  ==3 pointer of array
	int(*arr4[3]); //same as arr2  ==3 pointer of array
	arr2[0] = arr1;
	arr2[1] = arr11;
	arr2[2] = arr111;
	arr4[0] = arr1;
	arr4[1] = arr11;
	arr4[2] = arr111;
	printf("sizeof(arr2)	= %d\n", sizeof(arr2));//-->12  
	printf("sizeof(arr4)	= %d\n", sizeof(arr4));//-->12  
	printf("*arr2			= %p\n", *arr2);//  *arr2==arr2[0]==arr1
	printf("arr2[0]			= %p\n", arr2[0]);// *arr2==arr2[0]==arr1
	printf("arr1			= %p\n", arr1);//   *arr2==arr2[0]==arr1
	printf("**arr2			= %d\n", **arr2); //-->1  ==*arr1 ==arr1[0]
	printf("*(*arr2+1)		= %d\n", *(*arr2+1));//-->2 ==*(arr1+1)==arr1[1]

	puts("");
	//allocated int
	int(*arr3)[3];  // 1 pointer to array length of 3
	arr3 = &arr1;
	printf("sizeof(arr3) = %d\n", sizeof(arr3));//-->4  
	printf("*arr3[0]	 = %d\n", *arr3[0]);//-->1  == *(&arr1)[0]
	printf("**arr3		 = %d\n", **arr3);//-->1  **arr3 = *arr1 = arr1[0]
	printf("*(*arr3 + 1) = %d\n", *(*arr3 + 1));//-->2  == *(arr1+1) == arr1[1]
	printf("*arr3		 = %p\n", *arr3);// *arr3 = &arr1
	printf(" &arr1		 = %p\n", &arr1);//  *arr3 = &arr1

	puts("");
	int b[5][3] = { { 7, 8, 9 }, {4,5,6} };
	arr3 = b;  //pointer to b[0]
	printf("b[0]		= %p\n", b[0]); //b[0] == b ==*arr3
	printf("b			= %p\n", b);//b[0] == b ==*arr3
	printf("*arr3		= %p\n", *arr3);//b[0] == b ==*arr3
	printf("**b			= %d\n", **b); //-->7
	printf(" arr1[0]	= %d\n", arr1[0]);//-->1
	printf("*arr3[0]	= %d\n", *arr3[0]);//-->7
	printf("**arr3		= %d\n", **arr3); //-->7
	puts("");

	char str2[] = "word";
	char str3[] = { 'w', 'o', 'r', 'd', '\0' };
	char cc = 'w';
	printf("str2			= %s\n", str2); //--> word
	printf("str3			= %s\n", str3); //--> word
	printf("sizeof(str2)	= %d\n", sizeof(str2));   //--> 5
	printf("sizeof(str3)	= %d\n", sizeof(str3));  //--> 5

	char* cp3;
	char* cp2;
	cp2 = str2; //pointer to char array (string)
	cp3 = &cc;  // pointer to char
	printf("cp3[0]		= %c\n", cp3[0]);//--> 'w'
	printf("*cp3		= %c\n", *cp3);//--> 'w'
	printf(" cp2[0]		= %c\n", cp2[0]); //--> 'w'
	printf("cp2			= %s\n", cp2);//-->'word'
	printf("cp2			= %p\n", cp2); //-->001AFAEC
	printf("str2		= %p\n", str2);//-->001AFAEC


	//two dimension array
	char str1[10][3] = { "bar", "foo", "zar" }; //char (*)[3]
	char str4[10][7] = { "aaaa", "bbbb", "cccc", "dddd" }; //char(*)[7]
	char(*cp1)[3]; // char(*)[3]
	cp1 = str1;  // str1 == &str1[0]
	printf("cp1 + 1 = %s\n", cp1 + 1); //-->'foozar'
	printf("cp1[1]	= %s\n", cp1[1]);  //-->'foozar'
	printf("cp1[1]	= %p\n", cp1[1]); //-->0024FB0B
	printf("*cp1	= %s\n", *cp1); //-->'barfoozar'
	printf("cp1		= %p\n", cp1);   //-->001FF630
	printf("*cp1	= %p\n", *cp1); //-->001FF630

	printf("*(cp1+1)	= %s\n", *(cp1+1)); //-->'foozar'
	printf("str1[0]		= %s\n", str1[0]);//-->'barfoozar'
	printf("str1[1]		= %s\n", str1[1]);//-->'foozar'

	char str5_1[] = "11111";
	char str5_2[] = "22222";
	char str5_3[] = "33333";
	char*cp5[3];
	cp5[0] = str5_1;
	cp5[1] = str5_2;
	cp5[2] = str5_3;
	printf("cp5[0] = %s\n", cp5[0]);
	//char** cp4;
	//cp4 = str4;
	//printf("%s\n", cp4[0][0]);

	return 0;
}