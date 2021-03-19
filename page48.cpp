#include <iostream>
using namespace std;
int main()
{
cout << "A program to Print Prime Numbers"<<endl ;
cout <<"enter a num = ";
int n;
cin >> n;
while (n<=100)
{
    if (n%n==1)
    {
        cout<<"primenumber";
    }
    n++;
}
return 0;
}