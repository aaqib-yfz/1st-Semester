#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"     A Program to Calculate Grades :"<<endl;
    cout<<"Enter Your Score :";
    cin>>n;
     if (n>=90 && n<=100)
     {
         /* code */
         cout<<"A* GRADE";
     }
     else if (n>=80 && n<90)
     {
         cout<<"A GRADE";
     }
     else if (n>=70 && n<80)
     {
         /* code */
         cout<<"B GRADE";
     }
     else if (n>=60 && n<70)
     {
         /* code */
         cout<<"C Grade";
     }
    else if (n>=50 && n<60)
    {
        /* code */
        cout<<"D GRADE";
    }
    else
    {
        
        cout<<"FAIL";
    }
    return 0;
     

     
     
     
}