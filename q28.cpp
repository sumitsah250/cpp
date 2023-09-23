#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int result;
    cout<<"enter the number a,b"<<endl;
    cin>>a>>b;
    try{
        if(b<=0){
            throw b;
        }
        result=a/b;
        cout<<"the result a/b  is:"<<result;
    }
    catch(...){
        cout<<"the value of b can't be negative or zero"<<endl;
    }

return 0;
}