#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

int main ()
 {
  string str;

  cout << "Enter The String You Want to Reverse : ";
  cin >> str; 

  reverse(str.begin(), str.end());
  cout << str;
 }