#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

typedef void (*myfp)(int);
struct foo{
	myfp cb;
	struct bar
	{
		int i;	
	}bar1;
	union car{
		union car* next;
		struct node
		{
			char* c;
		}Node;
	}car1;
};
void myfp1(int i);   // this is a prototype

int myfp0(int i,myfp cb);// this is a prototype
int main(int argc, char const *argv[])
{

	struct foo f1,*fp;
	f1.cb=myfp1;
	f1.bar1.i=10;
	
	fp=(struct foo *)malloc(sizeof(struct foo));
	// fp=&f1;
	fp->cb=myfp1;
	fp->cb(111);
	f1.cb(1);
	myfp0(11,myfp1);

	free(fp);
	return 0;
}
int myfp0(int i,myfp cb){   //this is a definition
	cb(i);
	return i;
}
void myfp1(int i){   //this is a definition
	printf("%d\n",i );
}

