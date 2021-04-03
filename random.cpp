#include <iostream>
using namespace std;
#include <string>
struct students_data
{
    /* data */
    string names;
    int t;
    string grade;
};


void input(){
    students_data student[3];
    cout << "Enter Students Data" << endl;
    for (int i = 0; i < 3; i++)
    {
        /* code */
        cout << "Enter Student " << i << " Name:";
        cin >> student[i].names;
        cout << "Enter Test Score of Student " << i <<" :";
        cin >> student[i].t;
        cout << "Enter Grade";
        cin >> student[i].grade;
        cout << endl;
        

    }
    
}

void output (){
    students_data student[3];
    cout << "Data Of The Students"<<endl;
    for (int i = 0; i < 3; i++)
    {
        /* code */
        cout << "Name of The Student " << i << " : "<<student[i].names ;
        cout << "Score of The Student " << i << " :" << student[i].t<<endl ;
        cout << "Grade" << student[i].grade;
    }
    
}

int main()
{
    students_data student[3];
    cout << "Enter Data of THe Students "<< endl;
    input();
    output();
return 0;
}