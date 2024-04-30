#include<iostream>
using namespace std;
template <class T>
void display(T data){
    cout<<data<<endl;
}


template< class T>
void display(T data,int n){
    for(int i=0;i<n;i++){
        cout<<data<<endl;
    }
}



int main(){
    display(1);
    display(1.1);
    display(1.1,4);
    display("Sumit",40);

    return 0;
}