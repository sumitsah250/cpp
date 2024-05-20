#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            int l =nums.size();
            for(int j=i+1;j<l;j++){
                if(nums.at(i)==nums.at(j)){
                    nums.erase(nums.begin()+j);
                     ++k;
                }
            }
        }
        return k;
    }
};
int main(){
    Solution s1;
    vector<int> num1;
    for(int i=0;i<=5;i++){
        int a;
        cout<<"enter a number:";
        cin>>a;
        num1.push_back(a);
    }
    // int x= 
   cout<<s1.removeDuplicates(num1)<<endl;
}