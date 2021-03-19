#include <iostream>
using namespace std;
int main()
{
char ch;
cout<<" A PROGRAM THAT TELLS THE DIFFERENCE BETWEEN VOWELS & CONSONANTS"<<endl;
cout<<"Enter Any English Letter :";
cin>>ch;
switch (ch)
{
case 'A':
case 'a':
    cout<< ch  << " is a Vowel";
    break;

case 'E':
case 'e':
cout<< ch  << " is a Vowel";
break;

case 'I':
case 'i':
cout<< ch  << " is a Vowel";
break;


case 'O':
case 'o':
cout<< ch << "  is a Vowel";
break;

case 'U':
case 'u':
cout<< ch  << " is a Vowel";
break;

default:
cout<<ch  << "  is a Consonant";
    break;
}

return 0;
}