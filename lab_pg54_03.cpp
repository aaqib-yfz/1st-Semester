#include <iostream>
using namespace std;

int sum_msd_lsd( int number)
  {
     int sum = 0;
     int p; 

     int digit= number %10;     // eg: in 453 , 3 is stored in digit
     sum +=digit;               //  sum = 3

     number/=10;             
     p = number/10;
     sum+=p;
     return sum ;     
   }

   int main ()
    {
        int n;
        cout << "Enter Any 3-Digit Number = ";
        cin >> n;
        cout << "The Sum of LSD & MSD in " << n << " = " << sum_msd_lsd(n);
        return 0 ;
    }