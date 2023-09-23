#include<iostream>
using namespace std;
template< class t >
class max{
    t a,b;
    public:
    max(t a,t b){
        this->a=a;
        this->b=b;
    }
    // void maxarg(){
    //     if(a>b){
    //         cout<<"a="<<a<<endl;
    //     }
    //     else{
    //         cout<<"b="<<b<<endl;
    //     }
    // }
    char maxarg(){
        if(strcmp(a,b>0)){
            cout<<"a="<<a;
        }
        else {
            cout<<"b="<<b;
        }
    }

};
int main()
{
    char x='s';
    char y='y';
    max<char> m1(x,y);
    m1.maxarg();

return 0;
}