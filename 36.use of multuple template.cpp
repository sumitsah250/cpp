#include<iostream>
using namespace std;
template <typename t1,typename t2>
void print(t1 v1,t2 v2){
    cout<<"the value of v1 is:"<<v1<<endl;
    cout<<"the value of v2 is:"<<v2<<endl;
}

int main()
{
    print(5,"sumit");
    print("sumit",5);
return 0;
}