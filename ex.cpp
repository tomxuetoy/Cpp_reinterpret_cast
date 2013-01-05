// From link: http://msdn.microsoft.com/en-us/library/e0w9f63b%28v=vs.80%29.aspx
// expre_reinterpret_cast_Operator.cpp
// compile with: /EHsc
#include <iostream>

// Returns a hash code based on an address
unsigned short Hash( void *p ) {
   unsigned int val = reinterpret_cast<unsigned int>( p );
   return ( unsigned short )( val ^ (val >> 16));
}

using namespace std;
int main() {
   int a[20];
   for ( int i = 0; i < 20; i++ )
      cout << Hash( a + i ) << endl;
}
