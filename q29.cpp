#include<iostream>
#include<math.h>
using namespace std;
class x{
    int n;
    public:
    void getdata(){
        cout<<"enter the number:"<<endl;
        cin>>n;
    }
    float check(){
        if(n<0){
            throw 2;
        }
        else 
        return (sqrt(n));
    }

};
int main()
{
  x a;
  float result;
  a.getdata();
  try{
    result=a.check();
    cout<<"the square root of the number is"<<result<<endl;
  }
  catch(const int s){
    cout<<"the number can't be negative:"<<endl;
  }

return 0;
}