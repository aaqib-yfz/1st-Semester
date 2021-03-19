#include <iostream>

using namespace std;

int main()
{
	cout<<"	A PROGRAM WHICH SHOWS SUMMATION OF SERIES GIVEN IN QUESTION	"<<endl; //S=1+ 4 + 9+ 16+………+(n*n). 
    int sum = 0;
	int n;

	cout << "Enter a number n: ";
	cin >> n;

	for (int i = 1; i <= n; i++){
		sum += i * i;
	}

	cout << "Sum of the series till " << n << " = " << sum;
	return 0;
}