#include<iostream>
#include<math.h>
using namespace std;
class Point{
  
    int a,b;
    friend float Distance( Point o1, Point o2);
    public:
    Point(){
        a=10;
        b=10;
    }
    void displaydata(){
        cout<<"a="<<a<<",b="<<b<<endl;
    }
    Point(int a1,int b1){
        a=a1;
        b=b1;
    }
};
float  Distance( Point o1, Point o2){
    float s;
    s= sqrt((o1.a-o2.a)*(o1.a-o2.a)+(o1.b-o2.b)*(o1.b-o2.b));
    return s;
}
int main()
{
    Point p1;
    p1.displaydata();
    Point p2(5,7);
    p2.displaydata();
    cout<<"the distance between two points is:"<<Distance(p1,p2)<<endl;
return 0;
}