#include <iostream>
using namespace std;
int main()
{
int n;
cout << " ENTER ANY NUMBER = ";
cin >> n;
int digit;
int temp = n;
int sum = 0;
do
{
  digit = temp % 10;
		{
		if (digit % 2 == 0)
		sum += digit;
    temp/=10;
    }
}   
 while (temp!=0);
 cout<<"sum of even digits in " << n << " = " <<sum;
return 0;
}