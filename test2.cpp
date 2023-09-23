#include<iostream>
using namespace std;
class X{
    public:
    int x,y;
    X(int a,int b){
     x=a;
     y=b;
    }
     friend int sum(X o);
};
int sum( X o){
  int s;
  s=o.x+o.y;
  cout<<"the sum is:"<<s<<endl;
}
int main()
{
    X c1(10,5);
    sum(c1);

return 0;
}