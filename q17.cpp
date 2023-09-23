#include<iostream>
using namespace std;
int count=1;
class example{
    public:
    example(){
        cout<<"object number "<<count<<"is created"<<endl;
        count++;
    }
    ~example(){
        count--;
        cout<<"object number "<<count<<"is destroyed"<<endl;
    }
};
int main(){
    {
        example e1,e2,e3,e4;
        {
            cout<<"object created in block"<<endl;
             example e5;
        }
    }
    return 0;
}