#include <iostream>
using namespace std ; 

int  gcd(int a, int b )
 {
 int g;
   for (int i=1; i<=a && i<=b ;  i++)
    {
        if (a % i == 0 && b % i == 0)
          {
              g = i;
             
          }
      }
       return g;
    }

 
 int main ( )
  {
      int x ,y;
       cout << "Enter First Number = ";
       cin  >> x;

       cout << "Enter Second Number =  " ;
       cin >> y;

       cout << "The GCD of "<< x <<" & " << y << " is " <<  gcd(x,y);
  }