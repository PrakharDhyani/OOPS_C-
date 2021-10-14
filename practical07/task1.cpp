#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int year,month,date;
int choice;
cout << "Enter year , month , date "<<endl;
cin  >> year >> month >> date ;
do
{

cout << "Enter the choice : "<<endl<< "1 - for year  2- for month  3- for date "<< endl;
cin >> choice ;
switch(choice)
{
 case 1 : cout  << year <<endl;
 		break;
 case 2 : cout  <<  month << endl;		
 		break;
 case 3 : cout << date <<endl;
 		break;
 default : cout << "Invalid Choice program exit "	<< endl;
 		break;			
}
}
while(choice ==  1 || choice == 2 || choice ==3);
}

