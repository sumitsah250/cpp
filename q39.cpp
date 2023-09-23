#include<iostream>
using namespace std;
class poly{
    protected:
    int length ,breadth;
    public:
    poly(){}
    void getdata(int a,int b){
        length=a;
        breadth=b;
    }
    virtual void area(){
        cout<<"this is called from virtual class "<<endl;
      
    }

};
class rectangle:public poly{
    public:
    void area(){
        cout<<"the area of rectangle is:"<<(length*breadth)<<endl;
    }
};
class triangle:public poly{
    public:
    void area(){
        cout<<"the area of triangle is:"<<((0.5)*(length*breadth))<<endl;
        cout<<length<<breadth;
    }
};
int main()
{
    poly p;
    rectangle r;
    triangle t;
    poly *pp;
    pp=&r;
    pp->getdata(5,6);
    pp->area();
    pp=&t;
    pp->getdata(5,6);
    pp->area();
return 0;
}