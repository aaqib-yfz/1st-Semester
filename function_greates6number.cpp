#include <iostream>
using namespace std ;
int max(int a ,int b)
{
    int l;
    if (a>b)
    {
        l=a;
    }
    else 
    {
        l=b;

    }
    return l ;
}
int main()
{
    int x,y,z,f,q,e;
    cout <<"Enter Numbers = ";
    cin >> x >> y >> z >>f>>q>>e;
    cout << "The Greates Number is :"<<max(x, (y,z,f,q,e));
    return 0;
}