#include <iostream>  
using namespace std;  

// pointers_to_members1.cpp  
class Window  
{
public:  
	Window();                               // Default constructor.  
	Window( int x1, int y1,                 // Constructor specifying  
	int x2, int y2 );                       //  window size.  
	bool SetCaption( const char *szTitle ); // Set window caption.  
	const char *GetCaption();               // Get window caption.  
	char *szWinCaption;                     // Window caption.  
};  

// Declare a pointer to the data member szWinCaption.  
char * Window::* pwCaption = &Window::szWinCaption;  

const char * (Window::*pfnwGC)() = &Window::GetCaption;  
bool (Window::*pfnwSC)( const char * ) = &Window::SetCaption;

Window wMainWindow;  
Window *pwChildWindow = new Window;  
char   *szUntitled    = "Untitled -  ";  
int    cUntitledLen   = strlen( szUntitled );  

strcpy_s( wMainWindow.*pwCaption, cUntitledLen, szUntitled );  
(wMainWindow.*pwCaption)[cUntitledLen - 1] = '1';     //same as  
//wMainWindow.SzWinCaption [cUntitledLen - 1] = '1';  
strcpy_s( pwChildWindow->*pwCaption, cUntitledLen, szUntitled );   
(pwChildWindow->*pwCaption)[cUntitledLen - 1] = '2'; //same as
 //pwChildWindow->szWinCaption[cUntitledLen - 1] = '2';


// virtual_functions.cpp  
// compile with: /EHsc  

class Base  
{  
public:  
virtual void Print();  
};  
void (Base ::* bfnPrint)() = &Base :: Print;  
void Base :: Print()  
{  
cout << "Print function for class Base\n";  
}  

class Derived : public Base  
{  
public:  
void Print();  // Print is still a virtual function.  
};  

void Derived :: Print()  
{  
cout << "Print function for class Derived\n";  
}  

int main()  
{  
	Base   *bPtr;  
	Base    bObject;  
	Derived dObject;  
	bPtr = &bObject;    // Set pointer to address of bObject.  
	(bPtr->*bfnPrint)();  
	bPtr = &dObject;    // Set pointer to address of dObject.  
	(bPtr->*bfnPrint)();  
}  

//Output: Print function for class Base  
// Print function for class Derived

