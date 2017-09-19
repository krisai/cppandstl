
#ifndef __CALLBACK_H_
#define __CALLBACK_H_

typedef void(*__handle)();
typedef void(*__handle1)(void);
typedef void(*__handle2)(int);
#define __syscall(a,h) push(a,(__handle)h)

__handle calls[100];
enum {
	CB1 = 1,
	CB2 = 2,
	CB3 = 3,
	CB4 = 4
};

#endif

