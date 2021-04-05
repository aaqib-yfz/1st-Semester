#include <iostream>
using namespace std;

struct medical_reports
{
    string patients_name;
    int Age;
    string Disease;
    string sex;
};
void input(medical_reports per[5] ){
    cout << "Enter Informaton About patient"<<endl;
    for (int i = 0; i < 5; i++)
    {
    /* code */
    cout << "Enter Patient's Name : ";
    cin >> per[i].patients_name;
    cout << "Patient's Sex : ";
    cin >> per[i].sex;
    cout << "Enter Patient's Age : ";
    cin >> per[i].Age;
    cout << "Disease Diagnosed : ";
    cin >> per[i].Disease;
    cout << endl;
    }
}
void output(medical_reports per[5]){
    cout << "   Patients Information    "<<endl;
    for (int  i = 0; i < 5; i++)
    {
    /* code */
    cout << "Patient's Name : " << per[i].patients_name;
    cout << "Patient's Sex : "<< per[i].sex;
    cout << "Patient's Age :"<<per[i].Age;
    cout << "Disease Diagnosed :" << per[i].Disease;
    }
    
}
void index(medical_reports per[5]){
    cout << 
}

int main()
{
medical_reports per[5];
input(per);
output(per);
return 0;
}