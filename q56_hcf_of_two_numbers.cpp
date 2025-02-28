#include<iostream>
using namespace std;

int HCF(int x,int y){

     if(x<y){
        for(int i=x;i>0;i--){
            if(x%i==0 && y%i==0){
               return i; 
            }
        }
     }else{
         for(int i=y;i>0;i--){
            if(x%i==0 && y%i==0){
               return i; 
            }
        }
     }

}

int main(){

    int x,y;
    cout<<"enter the number X:";cin>>x;
    cout<<"enter the number Y:";cin>>y;
    cout<<"HCF of the "<<x<<" and "<<y<<" is: "<<HCF(x,y);


    return 0;
}