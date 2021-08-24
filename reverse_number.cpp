#include <iostream>
using namespace std;
int main()
{
int number ;
cout <<"Enter 5 Digit Number =";
cin >> number;
int temp = number;

int digit =0;
int rev=0;
while(number>0){
digit=number%10;
rev= rev*10 + digit;
number/=10;
}

cout << "Reverse of the " << temp << " is : " <<rev;
return 0;
}