#include<iostream>
using namespace std;
class base{
    public:
    virtual void show(){
        cout<<"i am from derived class"<<endl;
    }
};
class derived: public base{
    public:
    void show(){
        cout<<"i am form derived class"<<endl;
    }
};
int main()
{
    base *pb,b; 
    derived *pd,d;
    pb=&d;
    pd=dynamic_cast<derived*>(pb);
    pd->show();
return 0;
}