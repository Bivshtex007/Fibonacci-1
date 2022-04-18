#include <iostream>
#include <cmath>
using namespace std;

int main()
{

int x = 0 ;
int a = 0 ;
int b = 1 ;

cout << a << " " ;
cout << b << " " ;

while ( x <= 100 )
{
a = a + b ;
b = a + b ;
x++;
cout << a << " " ;
cout << b << " " ;
}

return 0;
}