#include<iostream>
using namespace std;

int main()
{
  string s;
  cout<<"Enter the String"<<endl;
  cin >> s;
  int i = 0 ,j = s.size()-1;
  while(i<j)
	{
	   if(s[i] != s[j])
		{
		   cout<<"String is not a Palindrome"<<endl;
		   return 0;
		}
		i++;
		j--;
	} 
  cout<<"String is a Palindrome "<<endl;
  return 0;
}
