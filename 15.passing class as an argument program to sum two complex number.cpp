#include<iostream>
using namespace std;
class Complex{
  int a,b;
  public:
  void GetData();
  void PutData();  
  void Sum(Complex o1,Complex o2){
    a=o1.a+o2.a;
    b=o1.b+o2.b;
  }
};
void Complex :: GetData(){
    cout<<"enter the complex number a,b"<<endl;
    cin>>a>>b;
}
void Complex :: PutData(){
  cout<<"the number is:"<<a<<"+"<<b<<"j"<<endl;
}
int main()
{
    Complex a1,a2,a3;
    a1.GetData();
    a2.GetData();
    a1.PutData();
    a2.PutData();
    a3.Sum(a1,a2);
    a3.PutData();
return 0;
}