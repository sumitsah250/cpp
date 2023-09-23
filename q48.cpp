#include<iostream>
using namespace std;
enum day{sunday=10,monday,tuesday,wednesday,thrusday,friday=30};
int main()
{
    day d1,d2;
    d1=sunday;
    d2=friday;
    int n=d2-d1;
    cout<<n;
return 0;
}