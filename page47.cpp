#include <iostream>
using namespace std;
int main()
{
 int n;
 cout << "Enter a Number = ";
 cin >> n;
 int rnumber;
 while (n!=0)
 {
     rnumber=n%10;
     n=n/10;
     cout <<rnumber; 
 }

return 0;
}