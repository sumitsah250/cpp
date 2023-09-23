#include<iostream>
using namespace std;
int & average( int & a,int & b){
    int c;
    c=(a+b)/2;
    if(a>b){
        a=c;
        return a;
    }else{
        b=c;
        return b;
    }}
int main()
{
    int p=5;
    int q=7;
    cout<<"before calling the function"<<endl;
    cout<<"p="<<p<<"q="<<q<<endl;
    average(p,q);
    cout<<"p="<<p<<"q="<<q<<endl;
return 0;
}