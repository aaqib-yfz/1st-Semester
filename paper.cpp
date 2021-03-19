#include <iostream>
using namespace std;
int main()
{

int Array[5]= {12,13, 14 ,15, 16};
int Array2[5];

cout << " BEFORE REVERSING  " << endl;
for(int i = 0; i<5; i++)
 {
 	cout << Array[i] << "  ";

 }
 
 cout << endl;
 
 cout << "AFTER REVERSING "<< endl;
for( int i = 4; i>=0; i--)
 {
    Array2[i] = Array[i] ;
   cout << Array2[i] << "  ";
 }

}
