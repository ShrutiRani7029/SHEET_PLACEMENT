class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>nums2;
        for(auto it:nums)
        {
            nums2.push_back(it);
        }
        sort(nums2.begin(),nums2.end(),greater<int>());
        int m=nums2[0];
        int ans=0;

        for(int i=0;i<n;i++)
        {
            if(nums[i]==m)
            {
                ans=i;
                break;
            }
        }
        return ans;

    }
};
