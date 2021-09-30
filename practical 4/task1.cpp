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
int main()
{
  std::cout<<first::add(2,4)<<std::endl;
  std::cout<<second::add(2.6,4.3)<<std::endl;
}
