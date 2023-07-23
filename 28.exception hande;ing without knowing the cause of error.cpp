#include<iostream>
using namespace std;
int main()
{
int b;
float a,result=0.0;
cout<<"enter the value of a and b"<<endl;
cin>>a>>b;
try{
    if(b<0){
        throw result;
    }
    if(b==0){
        throw b;
    }
    result=(a/b);
}
catch(...){
    cout<<"the value of can't be -ve or zero"<<endl;
}
if(b != 0 && b>0){
    cout<<"the a/b is:"<<result<<endl;
}
return 0;
}