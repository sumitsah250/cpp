#include<iostream>
using namespace std;
int recursive(int n){
    if(n==1){
        return 1;}
        else
    {
        return(n*recursive(n-1));
    }

    
}
int main()
{
    int a;
cout<<"\nEnter a number: ";
cin>>a;
cout<<"\nFactorial: "<<recursive(a);
return 0;
}