#include<iostream>
using namespace std;
class sumit{
    int real,imj;
    public:
    void operator <<(){
        cout<<real<<"+"<<imj<<endl;
    }
    void operator >>(){
        cin>>real;
        cin>>imj;
    }

};
int main()
{
    sumit s1;
    >>s1;
    <<s1;

return 0;
}