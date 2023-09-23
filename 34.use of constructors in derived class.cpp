#include<iostream>
using namespace std;
class X{
   int a;
   public:
   X(int a1){
    a=a1;
    cout<<"class X constructor is called"<<endl;
   }
   void showdata1(){
      cout<<"the value of a is:"<<a<<endl;
   }
};
class Y{
   int b;
   public:
   Y(int b1){
    b=b1;
    cout<<"class Y constructor is called"<<endl;
   }
   void showdata2(){
      cout<<"the value of b is:"<<b<<endl;
   }
};
class Z:public X,public Y{
    int c,d;
    public:
    Z(int a1,int b1,int c1, int d1):X(a1),Y(b1){
        c=c1;
        d=d1;
        cout<<"the constructor of the Z class is called"<<endl;
    }
    void getdata(){
        cout<<"the value of c & d are"<<c<<" "<<d<<endl;
        showdata1();
        showdata2();
    }

};
int main()
{
  Z p(1,2,3,4);
    p.getdata();
return 0;
}