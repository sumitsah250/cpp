#include<iostream>
#include<string.h>
using namespace std;
class Shop{
    int item_id[10];
    int item_price[10];
    int counter=0;
    public:
    void initcounter(){counter=0;}
    void setdata();
    void displaydata();
};
void Shop :: setdata(){
    cout<<"enter the id of item no."<<counter+1<<endl;
    cin>>item_id[counter+1];
    cout<<"enter the price of the item:"<<endl;
    cin>>item_price[counter+1];
    counter++;
}
void Shop:: displaydata(){
    for(int i=1;i<=counter;i++){
        cout<<"the price of id:"<<item_id[i]<<"\tis"<<item_price[i]<<endl;
    }
}
int main()
{
   Shop dukan;
   dukan.initcounter();
   for(int i=0;i<3;i++){
    dukan.setdata();
   }
   dukan.displaydata();

return 0;
}