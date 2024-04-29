#include<iostream>
using namespace std;
template< class T>
T GetMax(T a,T b){
    T result;
    result = (a>b)?a:b;
    return result;
}
int main(){
    int i=5; int s=7;
    float j=7.7; float k=8.3;
    cout<<GetMax<int>(i,s)<<endl;
    cout<<GetMax(j,k);
    return 0;
}