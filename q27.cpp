#include<iostream>
using namespace std;
class Distance{
    int m;
    int cm;
    public:
    void getdata(){
        cout<<"enter the distance in meter"<<endl;
        cin>>m;
        cout<<"enter the distance in cm"<<endl;
        cin>>cm;
        cm=cm+m*100;
    }
    int operator =(Distance d1){
        if(cm==d1.cm){
            return 1;
        }
        else 
        return 0;
    }
};
int main()
{
    Distance d1,d2,d3;
    d1.getdata();
    d2.getdata();
    if(d1=d2){
        cout<<"both have same distance"<<endl;
    }
    else{
        cout<<"both have different distance "<<endl;
    }

return 0;
}