#include<iostream>
using namespace std;
class Complex{
    int a,b;
    friend class Calculate;
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
class Calculate{
    public:
    int realsum(Complex o1,Complex  o2){
        return(o1.a+o2.a);
    }
    int imjsum(Complex o1,Complex o2);
    
};
int Calculate ::  imjsum(Complex o1,Complex o2){
        return(o1.b+o2.b);
    }
int main()
{
    int realresult,imjresult;
    Complex c1,c2,s;
    c1.getdata(2,5);
    c1.displaydata();
    c2.getdata(2,5);
    c2.displaydata();
    s=add(c1,c2);
    s.displaydata();
    Calculate cal1;
    realresult= cal1.realsum(c1,c2);
    imjresult=cal1.imjsum(c1,c2);
    cout<<"the sum of real part of the complex is:"<<realresult<<endl;
    cout<<"the sum of imj part of the compled is:"<<imjresult<<endl;
return 0;
}