#include<iostream>
#include<iomanip>
using namespace std;

void boolFun(){
bool a = 10>9;
cout<< "boolFun() : "<<a<<endl;
} 
void shortFun(){
short a = 10;
cout<< "shortFun() : "<<a<<endl;
} 

void intFun(){
int a = 10;
cout<< "intFun() : "<<a<<endl;
} 
void floatFun(){
float a = 10.67235478632f;
cout<< "floatFun() : "<<setprecision(7)<<a<<endl;
} 
void doubleFun(){
double a = 10.76873648723476219384793821;
cout<< "doubleFun() : "<<setprecision(15)<<a<<endl;
} 
void wideCharFun(){
wchar_t a = L'p';
cout<< "wideCharFun() : "<<a<<endl;
} 
void longDoubleFun(){
long double a = 1673821837.6128736;
cout<< "wideCharFun() : "<<setprecision(20)<<a<<endl;
} 
void longFun(){
long a = 167382183767;
cout<< "longFun() : "<<a<<endl;
} 



int main()
{
   boolFun(); 
   shortFun();
   intFun(); 
   longFun();
   floatFun(); 
   doubleFun(); 
   longDoubleFun(); 
   wideCharFun(); 
}

