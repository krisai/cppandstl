
#include <stdio.h>
#include "callback.h"
void push(int i,__handle h){
	calls[i] = h;
};
void call1(){
	printf("i'm call1!!\n");
}
void call2(){
	printf("i'm call2!!\n");
}

void call3(){
	printf("i'm call2!!\n");
}

void call4(){
	printf("i'm call2!!\n");
}
void call5(int i){
	printf("%d\n", i);
}

int main(){
	printf("CB1=%d\n", CB1);
	__handle funPtr = &call5;
	funPtr(2);
	__syscall(CB1, &call1);
	__syscall(CB2, &call2);
	__syscall(CB3, &call3);
	__syscall(CB4, &call4);
	if (calls[CB1] != NULL)
		calls[CB1]();
	else
		printf("%lu\n", sizeof(calls));
	return 0;
}

