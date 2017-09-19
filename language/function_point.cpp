#include <iostream>

void call(int x){
	std::cout << x << std::endl;
}
void call_me_maybe(int number, void (*call_func)(int)) {
	call_func(number);
}

int main(){

	void (*foo)(int);

	foo = call;

	call_me_maybe(911, foo);
	return 0;

}



#include <iostream>
void call(int x){
std::cout << x << std::endl;
}
void call_me_maybe(int number, void (*call_func)(int)) {
call_func(number);
}
int main(){
call_me_maybe(911, call);
return 0;
} 


#include <iostream>
void my_int_func(int x){
std::cout << x << std::endl;
}
int main(){
void (*foo)(int);
foo = &my_int_func; // The ampersand is actually optional
(*foo)(2); // Calls my_int_func
foo(2); // Same as above line
return 0;
}



//Functions Pointers

void (*foo) (int); // Foo is pointer to void function that takes 1 int argument.

void *(*foo)(int *, char); //Foo is a pointer to a function that takes 1 int* argument and 1 char argument, that returns void* 