#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	string s1("sdasdasd");
	string::iterator it=   s1.begin();
	string s2 = s1;
	*it = '0';
	cout<< "s1 = " << s1 << endl;
	cout<< "s2 = " << s2 << endl;
	return 0;
}
