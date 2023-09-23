#include<iostream>
using namespace std;
template< typename t>
void sort( t a[20],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                t temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    int n;
    int p[20];
    cout<<"enter the number of data you want to sort"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort<int>(p,n);
    for(int i=0;i<n;i++){
        cout<<p[i];
    }

    return 0;
}

