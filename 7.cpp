#include<iostream>
using namespace std;
int & swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    return a;
}
int main()
{
    int x,y;
    x=4,y=9;
    cout<<"the value of x is:"<<x<<"\tthe value of y is:"<<y<<endl;
    swap(x,y)=55;
    cout<<"the value of x is:"<<x<<"\tthe value of y is:"<<y<<endl;


return 0;
}