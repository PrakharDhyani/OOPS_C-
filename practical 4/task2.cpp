#include<iostream>
 namespace first{
int add (int a,int b){
return a+b;
}
}

 namespace second{
float add (float a,float b){
return a+b;
}
}

using namespace first;
using namespace second;
int main()
{
  std::cout<<add(2,4)<<std::endl;
  std::cout<<add(2.6f,4.3f)<<std::endl;
}

