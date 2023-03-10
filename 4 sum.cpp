class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        int sum;

        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                for(int k=j+1;k<n-1;k++)
                {
                    for(int l=k+1;l<n;l++)
                    {
                        sum=nums[i]+nums[j]+nums[k]+nums[l];
                        if(sum==target)
                        {
                           vector<int>v;
                           v.push_back(nums[i]);
                           v.push_back(nums[j]);
                           v.push_back(nums[k]);
                           v.push_back(nums[l]);
                           s.insert(v);
                        }
                    }
                }
            }
        }
        for(auto it:s)
        {
            res.push_back(it);
        }
        return res;
    }
};
