#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cout<<"Enter the String"<<endl;
  cin >> s;
  reverse(s.begin(),s.end());
  cout<<" Reverse STring is : "<<s<<endl;
  return 0;
}
