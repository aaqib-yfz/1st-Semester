#include <iostream>
using namespace std;
int main()
{
 int n;
 int sum = 0 ;
 cout << " ENTER ANY NUMBER = "  ;
 cin >> n;
 int a = 0;
 do
  {
    sum += a*a;
    a++;
  }
 while ( a <= n);
 cout << " SUM OF SERIES TILL " << n << " = " << sum;
return 0;
}