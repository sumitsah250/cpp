#include<iostream>
using namespace std;
union money {
    char c;
    int n;
    
    float f;
};
int main(){
    union money m2;
    m2.c='c';
    m2.n=2;
    cout<<m2.n;
}