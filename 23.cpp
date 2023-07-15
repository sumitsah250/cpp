#include<iostream>
using namespace std;
//destructor dosent tES AN ARGUMENT nor does it return any value
class num{
   public:
   static int count;
    num(){
        
        count++;
        cout<<" constructor is called for object "<<count<<endl;
   }
   ~num(){
      cout<<" destructor is called for object "<<count<<endl;

    count--;
   }


};
 int num::count=1;

int main()
{
    cout<<"we are inside our main funtion"<<endl;
    cout<<"creating first object n1"<<endl;
    {
        cout<<"entring the block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to main"<<endl;
return 0;
}