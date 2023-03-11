class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
            if(nums[i]==nums[j])
            {
                if(abs(i-j)<=k)
                {
               count=1;
               break;
                }
            }
            }
        }
        if(count==1)return true;
        else return false;
    }
};
