#include <iostream>
using namespace std;
int main()
{
int n1 , n2 , n3, n4 ;

cout<<"1st num =";
cin >> n1;

cout<<"2nd num = ";
cin >> n2;

cout<<"3rd num = ";
cin >> n3;

cout << "4th num = ";
cin >> n4;

if (n1>n2 && n1<n3 )
{
  cout<<n1<<" is 2nd max";
}

else if (n2>n1 && n2<n3 && n2>n4 )
{
  cout<< n2 << " is 2nd max ";
}

else if (n3>n1 && n3<n2 && n3>n4)
{
  cout<< n3 <<" is 2nd max";
}

else if (n4>n1 && n4<n2 && n4>n3)
{ 
  cout << n4 <<" is 2nd max ";
}
return 0;
}