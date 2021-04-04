#include <iostream>
using namespace std;
struct students_data
{
    string name;
    int t;
};


void input(students_data student[3])
{
    cout << "Enter Students Data" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Student " << i << " Name:";
        cin >> student[i].name;
        cout << "Enter Test Score of Student " << i <<" :";
        cin >> student[i].t;
        cout << endl;
        
    }

}

void output (students_data student[3])
{
    cout << "Data Of The Students"<<endl;
    for (int i = 0; i < 3; i++)
    { 
        cout << "Name of The Student " << i << " : " << student[i].name << endl;
        cout << "Score of The Student " << i << ":" << student[i].t << endl;
        if (student[i].t >= 90 && student[i].t <= 100)
        {
            cout<< "Grade: A+";
        }
        else if (student[i].t>=80 && student[i].t<90)
        {
            /* code */
            cout <<"Grade: A";
        }
        else if (student[i].t>=70 && student[i].t <80)
        {
            /* code */
            cout << "Grade: B";
        }
        else if (student[i].t>=60 && student[i].t<70)
        {
            /* code */
            cout << "Grade: C";
        }
        else if (student[i].t>=50 && student[i].t<60)
        {
            /* code */
            cout << "Grade: D";
        }
        else{
            cout << "FAIL";
        }
        
        
        cout << endl;
        cout << endl;
        
        
    }

}


int main()
{
    students_data student[3];
    cout << "Enter Data of THe Students" << endl;
    input(student);
    output(student);
    return 0;
}