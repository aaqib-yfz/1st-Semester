#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i = 1, j = 1;
    int k = 1;
    while (j <= 4) 
    {
        while (k >= i)
        {
            k--;
        }
        j = 1;
        while (j <= i) 
        {
            cout << "*";
            cout << " ";
            j++;
        }
        cout << "\n";
        i++;
    }
    return 0;
}