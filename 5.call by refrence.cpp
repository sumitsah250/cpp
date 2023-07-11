#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x,y;
    x=4,y=9;
    cout<<"the value of x is:"<<x<<"\tthe value of y is:"<<y<<endl;
    swap(&x,&y);
    cout<<"the value of x is:"<<x<<"\tthe value of y is:"<<y<<endl;


return 0;
}