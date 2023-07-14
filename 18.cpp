#include<iostream>
using namespace std;
class Y;
class X{
    int num;
    friend int Sum( X o1,Y o2);
    public:
    void getdata(int a){
        num=a;
    }
    void display(){
        cout<<"the value of num:"<<num<<endl;
        
    }
};
class Y{
    int value;
    public:
    friend int Sum( X o1,Y o2);
    void getdata(int a){
        value=a;
    }
    void display(){
        cout<<"the value of value:"<<value<<endl;
        
    }
};
int Sum( X o1,Y o2){
    return(o1.num+o2.value);
}
int main()
{
    int res;
    X a1;
    Y a2;
    a1.getdata(2);
    a2.getdata(2);
    a1.display();
    a2.display();
    res=Sum(a1,a2);
    cout<<res<<endl;



return 0;
}