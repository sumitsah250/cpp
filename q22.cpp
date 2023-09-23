#include<iostream>
using namespace std;
class complex{
    int real,imj;
    public:
    complex(int i=0,int j=0){
        real=i;imj=j;}
        complex operator + (complex x) {
            complex temp;
            temp.real=real+x.real;
            temp.imj=imj+x.imj;
            return temp;
        }
        void dispaly(){
            cout<<real<<"+"<<imj<<"j"<<endl;
        }
};
int main()
{
    complex c1(5,6),c2(6,5),c3;
    c3=c1+c2;
    c3.dispaly();
    
return 0;
}