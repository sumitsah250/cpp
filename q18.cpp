#include<iostream>
using namespace std;
class area{
    public:
    area( int height){
        cout<<"the area of square is:"<<height*height<<endl;
    }
    area( int height,int length){
        cout<<"the area of reactangle is:"<<height*length<<endl;
    }
    area(int height, int length, int breadth){
        cout<<"the area of cube is:"<<height*length*breadth<<endl;
            }
};
int main()
{
    area a1(2),a2(2,2),a3(2,2,3);
return 0;
}