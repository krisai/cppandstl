#include <stdio.h>
#include <stdlib.h>
/*

#include <pthread.h>
#include <fcntl.h>
#include <unistd.h>

#include <sys/stat.h>
#include <sys/types.h> 
#include <unistd.h>
#include <string.h>

#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/shm.h>
#include <sys/msg.h>

#include <arpa/inet.h> 
#include <netinet/in.h>
#include <sys/socket.h>
#include <netdb.h>
#include <sys/un.h>
#include <limits.h>
#include <math.h>
#include <stddef.h>
#include <sys/wait.h>

 #include <sys/select.h>
 #include  <poll.h>
*/


// http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/netinet_in.h.html
// http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/sys_uio.h.html
void modifiy(int a,int* p1,int* p2){
	a=10;
	*p1=27;
	*p2=27;
}

int main(int argc, char const *argv[])
{
	int i=10;
	int*p = &i;
	int a = 22;
	int b = 33;
	modifiy(a,&b,p);
	printf("%p\n", p);
	printf("%d\n", i);
	printf("%d\n", b);
	return 0;
}



