#include<iostream>
using namespace std;
template<class t1>
void print_values (t1 value1,t1 value2, t1 value3){
    cout<<"the value 1 is:"<<value1<<endl;
    cout<<"the value 2 is:"<<value2<<endl;
    cout<<"the value 3 is:"<<value3<<endl;
}
int main()
{
    int x=5;
    double y= 3.14;
    string str="hello";
    print_values(y,str,x);
    cout<<"================="<<endl;
    print_values(x,y,str);
    cout<<"================="<<endl;
    print_values(str,y,x);
    cout<<"================="<<endl;
return 0;
}