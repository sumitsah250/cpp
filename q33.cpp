#include<iostream>
using namespace std;
template<typename t>
void sort( t a[20],int n){
    int temp;
    for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
        if(a[i]<a[j]){
         temp=a[i];
            a[i]=a[j];
            a[j]=temp;}    
     }
    }
    for(int i=0;i<n;i++){
       cout<<a[i];
    }
}
int main()
{
    int n;
    int p[20];
    cout<<"enter the number you want to enter"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort<int>(p,n);
return 0;
}