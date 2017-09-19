// static3.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
struct C {  
   void Test(int value) {  
      static int var = 0;  
      if (var == value)   
         cout << "var == value" << endl;  
      else  
         cout << "var != value" << endl;  

      var = value;  
   }  
};   

int main() {  
   C c1;  
   C c2;  
   c1.Test(100);  
   c2.Test(100);  
}  