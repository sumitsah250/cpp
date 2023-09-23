#include<iostream>
using namespace std;
float & Small(float & a,float & b);
int main()
{
    float a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the value of a and b before assingning"<<a<<" "<<b<<endl;
    float avg=(a+b)/2;
    Small(a,b)=avg;
    cout<<"the value of a and b after the assinging"<<a<<" "<<b<<endl;
return 0;
}
float & Small(float & a,float & b){
    if(a>b){ 
        return b;
    }
    else{
        return a;
    }
}