class D  
{  
public:  
   D( int mn, int dy, int yr ){};
   int getMonth() const;     // A read-only function  
   void setMonth( int mn );   // A write function; can't be const  
private:  
   int month;  
};  

int D::getMonth() const  
{  
   return month;        // Doesn't modify anything  
}  
void D::setMonth( int mn )  
{  
   month = mn;          // Modifies data member  
}  
int main()  
{  
   D MyD( 7, 4, 1998 );  
   const D BirthDate( 1, 18, 1953 );  
   MyD.setMonth( 4 );    // Okay  
   BirthDate.getMonth();    // Okay  
   // BirthDate.setMonth( 4 ); // C2662 Error  
} 