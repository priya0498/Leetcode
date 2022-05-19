class Solution {
public:
    void nextPermutation(vector<int>& nums) {
//         int n = nums.size();
//         int k = -1;
//         int l;
        
//         for (int i=0;i<n-1;i++){
//             if (nums[i]<nums[i+1]){
//                 k=i;
//             }
//         }
//         if (k==-1){
//             sort(nums.begin(),nums.end());
//             return;
//         }
//         for (int i=k+1;i<n;i++){
//             if (nums[i]>nums[k]){
//                 l=i;
//             }
//         }
              
//         int tmp = nums[l];
//         nums[l]=nums[k];
//         nums[k]=tmp;
        
//         reverse(nums.begin()+k+1,nums.end());
    next_permutation(nums.begin() , nums.end());
        
    }
};