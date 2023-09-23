#include<iostream>
#include<fstream>
using namespace std;
class sumit{
    static int i;
    int n;
    public:
    void getdata();
    void showdata();
    void getrecord();
    void showrecord();
    void sort(int[],int);
};
int sumit::i=1;
void sumit::getdata(){
    cout<<"enter"<<i<<endl;
    cin>>n;
    i++;
}
void sumit::showdata(){
    cout<<n;
}
void sumit:: getrecord(){
    sumit s1;
    fstream file;
    file.open("6test.txt",ios::app);
    s1.getdata();
    file.write((char*)&s1,sizeof(s1));
    file.close();
}
void sumit::showrecord(){
    sumit s1;
    int a[20],x=0;
    fstream file;
    file.open("6test.txt",ios::in);
    file.read((char*)&s1,sizeof(s1));
    while(!file.eof()){
        a[x]=s1.n;
        file.read((char*)&s1,sizeof(s1));
        ++x;
    }
    sort(a,x);
    for(int i=0;i<x;i++){
        cout<<a[i];
    }
}
void sumit::sort(int a[20],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    sumit s1;
    int n;
    cout<<"enter how many data you want to sort";
    cin>>n;
    for(int i=0;i<n;i++){
        s1.getrecord();
    }
    s1.showrecord();

    return 0;
}
