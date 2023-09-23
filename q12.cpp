#include<iostream>
using namespace std;
template <typename T>
class Number{
    private:
    T num;
    public:
    Number( T n){
        num=n;
    }
    T getdata(){
        return num;
    }
};
int main()
{
    Number<int> n1(8);
    cout<<"\n int number:"<<n1.getdata();
    Number<float> n2(8.5);
    cout<<"\n float number:"<<n2.getdata();
    Number<string> n3("sumit");
    cout<<"\n string number:"<<n3.getdata();

return 0;
}