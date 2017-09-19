#include <stdio.h>
#include <string.h>


double ( *var( double (*kk)[3] ) )[3]{
	return kk;
};
int main(){
	// char ss[]="啊啊ss";
	// int i;
	// long long int ii;
	// long int iii;
	// unsigned int ui;
	// double dd;
	// float ff;

	// printf("%lu\n",strlen(ss));
	// printf("%lu\n",sizeof(ss));
	// printf("%lu\n",sizeof(i));
	// printf("%lu\n",sizeof(ii));
	// printf("%lu\n",sizeof(iii));
	// printf("%lu\n",sizeof(ui));
	// printf("%lu\n",sizeof(dd));
	// printf("%lu\n",sizeof(ff));

	double ll[3]={1232.222,3434.22,445.33};
	double oo = (*var(&ll))[0];
	printf("%f\n",oo );
	int *(*varr[5])[5];
	int i1,i2,i3,i4,i5;

	return 0;
}
