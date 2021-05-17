#include <iostream>
#include <string.h>
using namespace std;
int main()
{
int count;
cout << "Enter the length of string you wanna reverse :";
cin >> count ;
char strng[count];
char revstrng[count];
cout << "string ";
for ( int i = 0; i < count; i++)
{
    /* code */
    
    cin >> strng[i];
    cout << strng[i] << " "; 
    
}
for ( int i = count; i >=0; i--)
{
    /* code */
    revstrng[i] = strng[i];
    cout << revstrng[i] << " ";

}



return 0;
}