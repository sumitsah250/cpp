#include<iostream>
using namespace std;
template <typename T>
T add ( T a,T b){
    return(a+b);
}
int main(){
    int re;
    double re2;
    re=add(20,20);
    re2=add(2.0,2.2);
    cout<<"the sum of 20 +20 is:"<<re<<endl;
    cout<<"the sum of 2.0 +2.2 is:"<<re2<<endl;
    
return 0;
}