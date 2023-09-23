#include<iostream>
using namespace std;
class sumit{
    int x=0;
    public:
    friend sumit operator ++(sumit & s1);
    friend sumit operator ++(sumit & s1,int not_used);

    void display(){
        cout<<"x=:"<<x<<endl;
    }
};
class aaditya{
    int y;
    public:
    friend void operator ++(aaditya s1);
};
sumit operator ++(sumit & s1){
    s1.x++;
    return s1;
}
sumit operator ++(sumit & s1,int not_used){
    sumit temp;
    s1.x++;
    return temp;

}
int main()
{
    sumit s1;
    s1.display();
    ++s1;
    s1.display();
    s1++;
    s1.display();

return 0;
}