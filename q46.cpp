#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
int *a;
float *b;
cout<<"the type of a is:"<<typeid(a).name()<<endl;
cout<<"the type of b is:"<< typeid(b).name()<<endl;
return 0;
}