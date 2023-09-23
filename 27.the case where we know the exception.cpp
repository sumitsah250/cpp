#include<iostream>
using namespace std;
int main()
{
int a,b;
float result,o;
cout<<"enter the value of a and b"<<endl;
cin>>a>>b;
try{
    if(b<0){
        throw o;
    }
    if(b==0){
        throw b;
    }
    result=a/b;
}
catch(int e){
    cout<<"the value of b can't be zero"<<endl;
}
catch(float e){
    cout<<"the value of b can't be negative"<<endl;
}
if(b != 0 && b>0){
    cout<<"the a/b is:"<<result<<endl;
}
return 0;
}