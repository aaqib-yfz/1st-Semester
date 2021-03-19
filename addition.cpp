#include <iostream>
using namespace std;
int main()
{
int n,sum,remainder;
sum=0;
cout<<"     A Program that takes 4Digit number and Add Digits with eachother     "<<endl;
cout<<"Enter 4Digit Number :";
cin>>n;
remainder=n%10;
sum=sum + remainder;
n=n/10;
remainder=n%10;
sum=sum+remainder;
n=n/10;
remainder=n%10;
sum = sum + remainder;
n=n/10;
sum=sum+n;
cout<<sum;

}