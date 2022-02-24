class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0; i<nums1.size(); i++)
        {
            int check = 0;
            for(int j=0; j<nums2.size(); j++)
            {
                if(nums2[j] == nums1[i])
                {
                    for(int k=j+1; k<nums2.size(); k++)
                    {
                        if(nums2[k] > nums1[i]) 
                        {
                            check = 1;
                            ans.push_back(nums2[k]);
                            break;
                        }
                    }
                }
                if(check)
                    break;
            }
            if(!check)
                ans.push_back(-1);
        }
        return ans;
    }
};