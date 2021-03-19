#include <iostream>
using namespace std;

int main()
 {
     struct student_data
     {
         string name;
         int marks[5];
         int Roll_no;
     };
     student_data person_A[2];
     person_A[0].name="wasif";
     person_A[0].Roll_no=23;

     person_A[0].marks[0]=69;
     person_A[0].marks[1]=45;
     person_A[0].marks[2]=67;
     person_A[0].marks[3]=32;
     person_A[0].marks[4]=79;

     for(int i = 0; i<5; i++ )
       {
           cout << person_A[0].marks[i] << "  "; 
       }

 }