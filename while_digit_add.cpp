#include <iostream>
using namespace std;
int main()
{
 int n;
 cout << " A PROGRAM THAT ADD DIGITS IN GIVEN NUMBER "<<endl;
 cout << "Enter Any Number = ";
 cin >> n;
 int sum=0;
 while ( n!= 0)
 {                                 /*asdasdasdsad
 asd */
     int digit= n%10;
     sum+=digit;
     n/=10;
     
 }
 cout <<  "sum of digits = "<< sum;
return 0;
}