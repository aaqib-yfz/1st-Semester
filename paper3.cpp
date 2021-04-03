#include <iostream>
using namespace std;
struct person{
	string name;
	int age;
	int salary;
};
int main(){
	person per[5];
	int j=1;
	for(int i=0; i<5; i++){
		cout<<"Enter name of : "<<j<<" person : ";
		cin>>per[i].name;
		cout<<"Enter age of : "<<j<<" person : ";
		cin>>per[i].age;
		cout<<"Enter salary of : "<<j<<" person : ";
		cin>>per[i].salary;
		j++;
	}
	 int j=1;
	for(int i=0; i<5; i++){
		cout<<"Name of : "<<j<<" person : ";
		cout<<per[i].name;
		cout<<endl;
		cout<<"Age of : "<<j<<" person : ";
		cout<<per[i].age;
		cout<<endl;
		cout<<"salary of : "<<j<<" person : ";
		cout<<per[i].salary;
		cout<<endl;
		j++;
	}
	
	return 0;
}