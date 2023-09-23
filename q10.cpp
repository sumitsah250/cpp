#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *ptr;
    ptr=&a;
    cout<<a<<endl;    
    cout<<&a<<endl;    
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    int *p=new int[3];
    p[0]=10;
    p[1]=20;
    p[2]=30;
    cout<<"the value of p is:"<<p[0]<<endl;
    cout<<"the value of p is:"<<p[1]<<endl;
    cout<<"the value of p is:"<<p[2]<<endl;
    delete p;
return 0;
}