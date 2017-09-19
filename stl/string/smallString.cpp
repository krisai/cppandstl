#include <string>
#include <string.h>
#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>
class DD
{
public:
	DD(){};
	~DD(){};
	void ddd(){cout <<"sadasdsd"<<endl;}
};
typedef char * byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++)
	printf("%p\t0x%.2x\n", &start[i], start[i]); 
    printf("\n");
}
// void show_bytes(byte_pointer bb,int len){
// 	for (int i = 0; i < len; ++i)
// 	{
// 		printf("%.2x\n", bb[i]);
// 	}
// }
void showint(int k){
	show_bytes((byte_pointer)&k,sizeof(k));
}
void showchar(char * cc){
	show_bytes(cc,strlen(cc));
}

int asdads(int * pp,int x){
	int y = *pp;
	*pp=x;
	return y;
}

int main(int argc, char const *argv[]){
	showint(22);
	showchar("cc");

 	short x = 12345; 
    short mx = -x; 
    
    show_bytes((byte_pointer) &x, sizeof(short)); 
    show_bytes((byte_pointer) &mx, sizeof(short)); 


	std::vector<DD*> d1;
	d1.push_back(new DD());
	d1.push_back(new DD());
	d1.push_back(new DD());
	for (std::vector<DD*>::iterator i = d1.begin();
	 i != d1.end();
	  ++i){
		(*i)->ddd();
		cout<<rand()%3<<endl;
	}
	string s1 = "sadasdasd"
	"asdasdsa";
	// string s2(s1);
	cout << s1 << endl;
	cout << "(" << __LINE__ << ") on line " <<endl;
	// cout << s2 << endl;
	return 0;
}