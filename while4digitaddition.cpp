#include <iostream>
using namespace std;
int main()
{
int n,sum,remainder,x;
x=1;
sum=0;
cout<<"     A Program that takes 4Digit number and show their sum in LOOP   "<<endl;
while (x==1)
{

    /* code */
cout<<"Enter 4Digit Number :  ";
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

cout<<"  THE SUM OF 4 DIGITS : "<<sum<<endl;
cout<<"IF YOU WANT TO PERFORM ANOTHER ADDITION PRESS 1  OTHERWISE PRESS 0"<<endl;
cin>>x;
}


}