#include<iostream>
using namespace std;
class add{
    public:
    int sum(int a, int b){
        return(a+b);
    }
};
int main()
{
    add a1;
    int a,b;
    cin>>a>>b;
    cout<<a1.sum(a,b);
return 0;
}