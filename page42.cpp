#include <iostream>
using namespace std;
int main()
{
cout << " SIMPLE CALCULATOR " << endl;
float a;
cout << " Enter First Operand = ";
cin >> a;

float b;
cout << " Enter Second Operand = ";
cin >> b;

char operation ;
cout << " Enter Operation (+,-,*,/) = ";
cin >> operation ;

switch (operation)
{
case '+':
    cout << "sum = "<< a+b ;
    break;

case '-':
cout << " subtraction = " << a-b;
break;

case '*':
cout << " multiplication = " << a*b;
break;

case '/':
cout << " Division = " << a/b ;
break;

default:
cout << " INVALID SELECTION";
    break;
}

return 0;
}