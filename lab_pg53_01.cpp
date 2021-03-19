#include <iostream>
using namespace std ;

int sumeven( int a , int b)
   {
       int sum ;
       sum = a+b;
       return sum ;
       
   }

   int main ()
    {
        int N,M;
        cout << "Enter 1st Number =";
        cin >> N;

        cout << "Enter 2nd Number =  ";
        cin >> M ;

        if (N % 2 == 0 && M % 2 ==0)
          {
        cout << "The Sum of  " << N <<" & " << M << " = " << sumeven(N,M);
          }
          else 
           {
               cout << "ERROR";
           } 
           return 0 ;
    }