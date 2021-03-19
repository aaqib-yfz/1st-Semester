#include <iostream>
using namespace std ;
 
 char is_capital( char ch )
 {
  switch (ch)
     {
     case 'A'... 'Z':
         cout << "TRUE";
         break;
       
     default:
       cout << "FALSE" ;
         break;
     }
  return 0;
 }

 int main ()
   {
       char CH;
       cout << "ENTER ANY CHARACTER = ";
       cin >> CH;
       cout << is_capital(CH);
       return 0 ;
   }