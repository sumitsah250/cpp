#include<iostream>
using namespace std;
class Complex{
    int a;
    int b;
    public:
    Complex(int a1=0,int a2=0){
      a=a1;
      b=a2;
    }
    void Display(){
        cout<<a<<"+"<<b<<"j"<<endl;
    }
    friend Complex operator + ( Complex x,Complex y);
};
Complex operator + ( Complex x,Complex y){
    Complex temp;
    temp.a=x.a+y.a;
    temp.b=x.b+y.b;
    return temp;
}
int main()
{
Complex M1(1,3),M2(3,2),M3;
M3=M1+M2;
M3.Display();
return 0;
}