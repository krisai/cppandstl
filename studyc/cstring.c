#include <stdio.h>
#include <string.h>
/*
strlen strcmp strcpy strcat strchr strstr

size_t strlen(const char *);
int    strcmp(const char *, const char *);
char * stpcpy(char *restrict, const char *restrict);
char * strcat(char *restrict, const char *restrict);

char * strncpy(char *restrict dst, const char *restrict src, size_t n); 
char * strncat(char *restrict s1, const char *restrict s2, size_t n);
int    strncmp(const char *s1, const char *s2, size_t n);

char * strstr(const char *s1, const char *s2);
char * strchr(const char *s, int c);
char * strcasestr(const char *s1, const char *s2);
char * strrchr(const char *s, int c);

void * memccpy(void *restrict, const void *restrict, int, size_t);

void * memchr(const void *, int, size_t);
int    memcmp(const void *, const void *, size_t);
void * memcpy(void *restrict, const void *restrict, size_t);
void * memmove(void *, const void *, size_t);
void * memset(void *, int, size_t);
*/
char sss[]="hello";
void hash11(const char* ss,int tableSize){
	while(*ss!='\0'){
		printf("%c\n", *ss);
		*ss++;
	}
	// printf("%p\n",&ss);
	printf("%s\n%s\n",__func__,sss);
};
int main(int argc, char const *argv[])
{
	
	printf("%s\n", sss+1);
	printf("%lu\n", strlen("汉"));
	printf("%lu\n", strlen(""));
	hash11("sadasdsad",10);
	return 0;
}

