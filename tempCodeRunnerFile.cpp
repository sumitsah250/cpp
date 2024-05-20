class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int k=0;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums.at(i)==nums.at(j)){
//                     nums.erase(nums.begin()+j);
//                     k++;
//                 }
//             }
//         }
//         return k;
//     }
// };