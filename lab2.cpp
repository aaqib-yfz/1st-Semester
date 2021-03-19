#include <iostream>

using namespace std;

int main()
{
	cout<<"		A PROGRAM THAT PRINTS MULTIPLE OF 3 FROM 1-100"		<<endl;//6 digits in each line
	int count = 0;
	for (int i = 3; i <= 100; i+=3)
	{
		if (count == 6)
		{
			count = 0;
			cout << endl;
		}
		cout << i << " ";
		count++;
	}
	return 0;
}