#include<iostream>
using namespace std;
class Y;
class X{
    int value1;
    friend void display(X & x,Y & y);
    friend void swapdata(X & x,Y & y);
    public:
    void getdata(int a){
        value1=a; }
    void display(){
        cout<<"the value of num:"<<value1<<endl;}
};
class Y{
    int value2;
    friend void display(X & x,Y & y);
     friend void swapdata(X & x,Y & y);
    public:
    void getdata(int a){
        value2=a;
    }
    void display(){
        cout<<"the value of value:"<<value2<<endl; 
    }
};
void swapdata(X & x,Y & y){
    int temp;
    temp=x.value1;
    x.value1=y.value2;
    y.value2=temp;
}
void display(X & x,Y & y){
  cout<<x.value1<<y.value2<<endl;
}
int main()
{
    X c1;
    Y c2;
    c1.getdata(2);
    c2.getdata(3);
    display(c1,c2);
    swapdata(c1,c2);
    display(c1,c2);
return 0;
}