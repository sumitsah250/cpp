#include<iostream>
using namespace std;
template <class T1,class T2,class T3>
class test{
    T1 a;
    T2 b;
    T3 sumit;
    public:
    void getdata( T1 a, T2 b, T3 c);
   
};
 template<class T1,class T2,class T3>
    void test<T1,T2,T3>::getdata(T1 a, T2 b, T3 sumit){
       
                    cout<<a<<b<<sumit<<endl;


        
    }
int main(){
    test<int,float,int> test1;
    
    test1.getdata(10,20.2,2);

    return 0;
}