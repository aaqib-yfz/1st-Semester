#include <iostream>
using namespace std;
int main()
{
char letter ;
cout <<" A PROGRAM THAT DIFFERENCIATE BETWEEN CAPITAL LETTER AND SMALL"<<endl;
cout << " ENTER ANY LETTER : ";
cin >> letter;
if ( letter >= 'A' && letter <= 'Z' )
{
    cout << " CAPITAL LETTER ";
}   
else if ( letter >= 'a' && letter <= 'z' )
{
    cout << " SMALL LETTER ";
}
else
{
    cout << " ERROR ";
}



return 0;
}