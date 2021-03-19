#include <iostream> 
using namespace std; 
   
void toBinary(long n) 
{  
    int binary[100]; 
   
    int i = 0; 
    while (n > 0) { 
   
        binary[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    for (int j = i - 1; j >= 0; j--) 
        cout << binary[j]; 
} 
  
int main() 
{ 
    long n;
    cout << "Enter Number =";
    cin >> n;
    cout << "binary of "<< n << " is " ;
    toBinary(n); 
    return 0; 
}