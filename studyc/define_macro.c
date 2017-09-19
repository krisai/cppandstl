


void iii(int *p){
	int i = 12;
	*p = i;
}
#define kkk(i) iii(i)


#define IDX(n, i, j) ((i)*(n)+(j))
#define MAX_(a,b) (    \
a<b?b:a                \
)

int main(){

	int l;
	kkk(&l);
	printf("l=%d\n", l);
	printf("IDX=%d\n", IDX(1, 2, 3));
	printf("MAX_=%d\n", MAX_(3, 2));
}
