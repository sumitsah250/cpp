#include<iostream>
#include<string.h>
using namespace std;
class Animal{
   string s[10];
   static int y;
   public:
   void getdata();
   void putdata();
};
void Animal :: getdata(){
    cout<<"enter the name of pet:"<<endl;
    cin>>s[y];
    y++;
}
void Animal :: putdata(){
    cout<<"the number of pet in database are:"<<y<<endl;
    for(int i=0;i<y;i++){
         cout<<"the name of pet is:"<<s[i]<<endl;
    }
}
int Animal :: y=0;

int main()
{
    
    Animal dog;
    dog.getdata();
    dog.getdata();
    dog.getdata();
    dog.putdata();

return 0;
}