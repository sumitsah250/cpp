#include<iostream>
#include<math.h>
using namespace std;
class sumit{
    int num;
    public:
    void get_num(int n){
        num=n;
    }
    void check(){
        if(num<0){
            throw "error";
        }
        else if(num==0){
            throw num;
        }
    }
    void display(){
        check();
        cout<<"the square root of the number is"<<sqrt(num)<<endl;
    }
};
int main()
{
    sumit s1;
    s1.get_num(0);   
try{
    s1.display();
}
catch(const char s[90]){
    cout<<"the value can't be -ve"<<endl;
}
catch(int s){
    cout<<"the value can't be zero"<<endl;
}
return 0;
}