#include<iostream>
using namespace std;
union money {
    char c;
    int n;
    float f;
};
int main(){
    union money m1;
    m1.c='c';
    m1.n=2;
    cout<<m1.n;
}