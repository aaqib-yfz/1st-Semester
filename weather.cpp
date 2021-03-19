#include <iostream>
using namespace std;
int main()
{
    int temp;
    cout<<"         A Program to Check Weather Conditions           "<<endl;
   cout<<"Enter Temperature in Celsius :";
   cin>>temp;
if (temp>=30)
{
    cout<<"The Weather is Hot";
}
else if (temp<30 && temp>=20)
{
 cout<<"The Weather is Pleasent";
}
else if (temp<20 && temp>=10)
{
    cout<<"The Weather is Cool";
}
else if (temp<10 && temp>=0)
{
    cout<<"The Weather is Cold";

}
else
{
    cout<<"The Weather is Freezing";
}
return 0;

}