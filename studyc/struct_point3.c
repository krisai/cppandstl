

#include <stdio.h>
#include <stdlib.h>



typedef void(*__handler)(void);
void myFunction(void)
{

}

typedef struct{
	int *array;
	int size;
}Array;
Array array_create(int init_size){
	Array a;
	a.size = init_size;
	a.array = (int*)malloc(sizeof(int)*init_size);
	return a;
}
int* array_at(Array* a,int idx){
	return &(a->array[idx]);
}


int main(){

	Array a = array_create(100);
	*array_at(&a, 0)=10;
	printf("%d\n", a.array[0]);
	free(NULL);
	free(0);

	
	__handler arr[100];
	arr[1] = &myFunction;
	__handler functionPtr = &myFunction;



	return 0;
}



