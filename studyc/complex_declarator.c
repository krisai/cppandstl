
struct both       /* Array of pointers to functions */  
{                 /*   returning structures         */  
    int a;  
    char b;  
} ( *var[5] )( struct both, struct both );

union sign *(*var[5])[5]; /* Array of pointers to arrays  
                             of pointers to unions        */

double ( *var( double (*)[3] ) )[3];
/*
In this declaration, a function returns a pointer to an array, 
since functions returning arrays are illegal.
Here var is declared to be a function returning a pointer to an array of three double values.
The function var takes one argument. The argument,
like the return value, is a pointer to an array of three double values.
The argument type is given by a complex abstract-declarator.
The parentheses around the asterisk in the argument type are required;
without them,
the argument type would be an array of three pointers to double values.
*/

unsigned int *(* const *name[5][10] ) ( void );
/*
The name array has 50 elements organized in a multidimensional array. 
The elements are pointers to a pointer that is a constant. 
This constant pointer points to a function that has no parameters 
and returns a pointer to an unsigned type.
*/


/* ILLEGAL */  
struct both *var[5](struct both, struct both);

union sign         /* Array of arrays of pointers */  
{                  /* to pointers to unions       */  
     int x;  
     unsigned y;  
} **var[5][5];

char **argv; //argv: pointer to char
int (*daytab)[13]; //daytab: pointer to array[13] of int 
int *daytab[13]; //daytab: array[13] of pointer to int 
void *comp(); //comp: function returning pointer to void 
void (*comp)();// comp: pointer to function returning void
char (*(*x())[])();
// x: function returning pointer to array[] of pointer to function returning char
char (*(*x[3])())[5];
// x: array[3] of pointer to function returning pointer to array[5] of char

#include <stdio.h>

int main(int argc,char* argv[]){
	return 0;
}
