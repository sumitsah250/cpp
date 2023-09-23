#include<iostream>
using namespace std;
class matrix{
    int x[3][3];
    public:
    void getdata(){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cout<<"enter the "<<i<<","<<j<<"element:"<<endl;
                cin>>x[i][j];
            }
        }
    }
    void display(){
          for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cout<<x[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    matrix operator + (matrix o1){
        matrix temp;
            for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                temp.x[i][j]=x[i][j]+o1.x[i][j];
            }
        }
        return temp;
    }
};
int main()
{
    matrix m1,m2,m3;
    cout<<"enter the data of matrix 1"<<endl;
    m1.getdata();
    cout<<"enter the data of matrix 1"<<endl;
    m2.getdata();
    cout<<"matrix 1 is:"<<endl;
    m1.display();
    cout<<"matrix 2 is:"<<endl;
    m2.display();
    m3=m1+m2;
    cout<<"matrix addition of the given matrix is:"<<endl;
    m3.display();
return 0;
}