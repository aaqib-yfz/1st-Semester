#include <iostream>
using namespace std;
int main()
{
int n1,n2,temp;
    cout<<"      A PROGRAM THAT SWAPS VALUE OF TWO VARIABLES     "<<endl;
    cout<<"Enter 1st Number :";
    cin>>n1;
    cout<<"Enter 2nd Number :";
    cin>>n2;
    cout<<"     BEFORE SWAP      "<<endl;
    cout<<"n1 = "<<n1<<endl;
    cout<<"n2 = "<<n2<<endl;
    temp=n1;
    n1=n2;
    n2=temp;
    temp=n2;
cout<<"     AFTER SWAP      "<<endl;
cout<<"n1 = "<<n1<<endl;
cout<<"n2 = "<<n2<<endl;

}