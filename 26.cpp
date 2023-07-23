#include<iostream>
using namespace std;
int main()
{
int a,b,result=0;
cin>>a>>b;
try{
    if(b==0){
        throw b;
    }
result=a/b;
}
catch(int e){
    cout<<"exception:the value of b can't be zero"<<endl;
}
if(b!=0){
    cout<<"a/b is : "<<result<<endl;
}

return 0;
}