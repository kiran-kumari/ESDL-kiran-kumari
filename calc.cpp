#include<iostream>
using namespace std;

void m1()
{
  cout<<"Hello world"<<endl;
}
int main()
{int a=10,b=20,result=0;
m1();
result=a+b;
cout<<"sum of two no.s is "<<result<<endl;
result=b-a;
cout<<"Difference of first no. from second is "<<result<<endl;
result=a*b;
cout<<"Multiplication of two no.s is "<<result<<endl;
result=b/a;
cout<<"Division is "<<result;
return 0;
}
