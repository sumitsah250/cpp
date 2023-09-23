#include<iostream>
using namespace std;
class derived;
class xyz{
    int a,b;
    public:
    xyz(){}
    xyz(int a,int b){
        this->a=a;
        this->b=b;
    }
    friend  derived;
};
class derived{
    public:
    void display(xyz x){
        cout<<"the value of a is:"<<x.a;
        cout<<"the value of b is:"<<x.b;
    }
};
int main()
{
    xyz x1(12,13);
    derived d1;
    d1.display(x1);

return 0;
}