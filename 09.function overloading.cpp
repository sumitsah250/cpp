#include<iostream>
using namespace std;
float volume(int a){
    cout<<"the volume of cube is";
    return(a*a*a);
}
float volume(int r, int l ,const float PI=3.14){
    cout<<"the volume of circle is:";
    return(PI*r*r*l);
}
float volume(int a, int b,int c){
    cout<<"the volume of cuboid is:";
    return(a*b);
}
int main()
{
    int a=5,b=5,r=10,l=5,c=5;
    cout<<volume(a,b,c)<<endl;
    cout<<volume(a)<<endl;
    cout<<volume(r,a);


return 0;
}