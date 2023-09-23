#include<iostream>
using namespace std;
template< class T>
T Max( T a,T b){
    T result ;
    result= (a>b)?a:b;
    return result;
}

int main()
{
    int a=5,b=6,k;
    k=Max(a,b);
    cout<<"k="<<k<<endl;
return 0;
}