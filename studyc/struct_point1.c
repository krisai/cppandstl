#include <stdio.h>
#include <stdlib.h>

struct X{
	int a;
};
struct Y{
	int b;
	struct X x;
};
void setStruct(struct Y *p){
	p->b = 11;
	p->x.a = 22;
	
}
struct Y* setStruct2(struct Y *p){
	p->b = 111;
	p->x.a = 222;
	return p;
}
void outStruct(struct Y y){
	printf("%d   %d \n", y.b,y.x.a);

}

#define CONTAINER_OF(ptr, type, field)               \
  ((type *) ((char *) (ptr) - ((char *) &((type *) 0)->field)))

#define offsetof(TYPE, MEMBER)	((size_t)&((TYPE *)0)->MEMBER)


int main(){
	typedef struct uv_loop_s uv_loop_t;
	typedef struct uv_tcp_s uv_tcp_t;
	typedef struct uv_stream_s uv_stream_t;
	struct uv_stream_s {
		char a[50];
		int b;
	};
	struct uv_tcp_s {
		int b;
	};
	struct uv_loop_s {
		void* data;
	};
	typedef struct {
		uv_tcp_t tcp_handle;
		uv_loop_t *loop;
	} server_ctx;
	server_ctx *sx;
	uv_stream_t *server,ww;
	server = &ww;
	printf("%p\n", server);
	printf("%p\n", &(server->a));
	printf("%p\n", &(server->b));
	printf("%zu\n", (size_t)&((uv_stream_t *)0)->a);
	printf("%zu\n", (size_t)&((uv_stream_t *)0)->b);
	puts("-----------------\n");
	sx = CONTAINER_OF(server, server_ctx, tcp_handle);

	

	(char *)(&((server_ctx *)0)->tcp_handle);
	(char*)(server);
	(int*)(server);

	puts("-----------------\n");
	struct address {
		char name[50];
		char street[50];
		int phone;
	};
	printf("address  name  = %d\n",
		offsetof(struct address, name));

	printf("address  street  = %d\n",
		offsetof(struct address, street));

	printf("address  phone  = %d\n",
		offsetof(struct address, phone));


	struct Y y;
	setStruct(&y);
	outStruct(*setStruct2(&y));
	printf("%d\n", y.b);
	printf("%d\n", y.x.a);
	// printf("%f\n", global);

	return 0;
}

