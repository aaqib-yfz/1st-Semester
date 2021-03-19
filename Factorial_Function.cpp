#include <iostream>
using namespace std ;

int factorial(long x)
   {
       int f=1;
       for (int  i = 1; i <= x; i++)
       {
           /* code */
           f*=i ;                        // f= (1*2*3*......*n)
       }

       return f;
       
   }

   int main ()
  {
      long n;
      cout << "Enter Any Number =" ;
      cin >> n ;
      
                      /* code */
          cout << "Factorial of " << n << " = " << factorial(n);
      
      return 0 ;
  }