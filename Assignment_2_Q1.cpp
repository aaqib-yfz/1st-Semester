#include <iostream>
using namespace std;

int fact( int n )
 { 
     int factorial = 1;
     for (int i = 1; i <= n ; i++)
     {
         /* code */
         factorial *=i ;
     }
     return factorial ;
 } 
 int main ()
  {
      int x ;
      cout << "Enter your Number = ";
      cin >> x;
      cout << "Factorial Of " << x <<" is " << fact(x);

  }