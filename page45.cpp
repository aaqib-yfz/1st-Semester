#include <iostream>
using namespace std;
int main()
{
    
cout << "A PROGRAM TO DETERMINE WHETHER GIVEN NUMS  ARE SIDES OR RIGHT ANGLE T" << endl;
int a,b,c;

cout << "Enter 1st Number = ";
cin >> a;

cout << "Enter 2nd Number = ";
cin >> b;

cout << "Enter 3rd Number = ";
cin >> c;

if ( ( a*a + b*b == c*c)  || ( a*a + c*c == b*b ) || ( b*b + c*c == a*a) )
{
    cout << "THEY ARE SIDES OF RIGHT ANGLE TRIANGLE";
}

else
{
    cout << "THE ARE NOT SIDES OF RIGHT ANGLE TRIANGLE";
}

return 0;
}