#include <stdio.h>
#include <stdlib.h>

const int BLOCK_SIZE = 20;

typedef struct {
	int *p;
	int size;
}Array;

Array array_create(int n){
	Array a;
	a.p = (int *)malloc(sizeof(int)*n);
	a.size=n;
	return a;
};
void array_free(Array * a){
	free(a->p);
	a->p=NULL;
	a->size = 0;
};


int array_get(const Array *a,int index){
	return a->p[index];
};
int array_set(Array * a,int index,int val){
	if(index>=a->size) return -1;
	a->p[index] = val;
	return 1;
};

void array_extend(Array *a,int extend){
	int * new_p = (int *)malloc(sizeof(int)*(a->size+extend));
	for(int i=0;i<a->size;i++){
		new_p[i]=a->p[i];
	}
	free(a->p);
	a->p = new_p;
	a->size += extend;
};

int * array_at( Array * a,int index){
	if(index>=a->size)array_extend(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE-a->size);
	return &(a->p[index]);
};

int main(int argc, char const *argv[])
{
	Array a = array_create(10);
	*array_at(&a,9) = 9;
	printf("%d\n", *array_at(&a,9));
	printf("%p\n",a.p );

	// array_free(&a);
	// printf("%d\n",a.size );
	// printf("%p\n",a.p );
	
	array_extend(&a,10);
	array_set(&a,18,18);
	printf("%d\n",a.size );
	printf("%d\n",array_get(&a,18) );
	printf("%d\n",array_get(&a,9) );
	*array_at(&a,22) = 22;
	*array_at(&a,24) = 24;
	printf("%d\n",array_get(&a,22) );
	printf("%d\n",a.size );
	return 0;
}
