#include <iostream>
using namespace std;
int main()
{
long int n,x,numbers;
char operation;
cout<<"   CALCULATOR    "<<endl;
cout<<"ENTER  1ST NUMBER  : "<<endl;
cin>>n;
cout<<"ENTER 2ND NUMBER : "<<endl;
cin>>x;
cout<<"choose operation(+,-,*/) "<<endl;
cin>>operation;
switch (operation)
{
case '+':
  /* code */
  cout<<"SUM = "<<n+x;
  break;

case '-':
cout<<"SUBSTRACTION = "<<n-x;
break;

case '*':
cout<<"PRODUCT = "<<x*n;
break;

case '/':
cout<<"DIVISION ="<<n/x;
break;

default:
cout<<"error";
  break;
}


return 0;
}