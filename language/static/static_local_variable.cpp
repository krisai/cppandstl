#include <iostream>  

using namespace std;  
void showstat( int curr ) {  
   static int nStatic;    // Value of nStatic is retained  
                          // between each function call  
   nStatic += curr;  
   cout << "nStatic is " << nStatic << endl;  
}  

int main() {  
   for ( int i = 0; i < 5; i++ )  
      showstat( i );  
}  