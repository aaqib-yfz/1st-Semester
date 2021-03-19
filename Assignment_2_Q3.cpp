#include <iostream>
using namespace std;

int fib(int n)
{
  if(n == 1 || n == 2)
  {
    return 1;
  }
  else 
  return ( fib (n-1) + fib(n-2) );
}

int main ()
 {
 int limit;
 int i = 1;
 cout << "Enter limit for fabionacci series to print = ";
 cin >> limit ;

 cout << " Fabionacci Series "<< endl ;
 while(i<limit)
  {
    cout <<fib(i) << "  ";
    i++;
  }
return 0;
 }