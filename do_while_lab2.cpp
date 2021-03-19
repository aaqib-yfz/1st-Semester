#include <iostream>

using namespace std;

int main()
{
	cout<<"		A PROGRAM THAT PRINTS MULTIPLE OF 3 FROM 1-100"		<<endl;
    int n = 0 ;
    int count = 0;
    do
    { 
      cout<< n << " ";
        n=n+3;
        count++;  
        if (count == 6)
        {
            /* code */
            count= 0;
            cout<< endl;
        }
        
    } 
    while (n<=100);
    return 0;
} 