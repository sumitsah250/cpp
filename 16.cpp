#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    void getdata(int a1, int b1){
    a=a1;
    b=b1;
    }
    void displaydata(){
        cout<<"the complex number is:"<<a<<"+"<<b<<"j"<<endl;
    }
        friend Complex add(Complex o1, Complex o2);
};
Complex add(Complex o1, Complex o2){
  Complex o3;
  o3.getdata((o1.a+o2.a),(o1.b+o2.b));
  return o3;
}
int main()
{
    Complex c1,c2,s;
    c1.getdata(2,5);
    c1.displaydata();
    c2.getdata(2,5);
    c2.displaydata();
    s=add(c1,c2);
    s.displaydata();

return 0;
}