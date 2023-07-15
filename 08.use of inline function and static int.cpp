#include<iostream>
using namespace std;
inline int sum(int a, int b){
    static int c=0;
    c=c+1;
    return (a+b+c);
}
int main()
{
    int a=5,b=5;
    cout<<"the sum of a and b is:"<<sum(a,b)<<endl;
    cout<<"the sum of a and b is:"<<sum(a,b)<<endl;
    cout<<"the sum of a and b is:"<<sum(a,b)<<endl;
    cout<<"the sum of a and b is:"<<sum(a,b)<<endl;
    cout<<"the sum of a and b is:"<<sum(a,b)<<endl;
    

return 0;
}