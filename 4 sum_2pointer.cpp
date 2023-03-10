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
            if(i>0 && nums[i]==nums[i-1])continue;
            for(int j=i+1;j<n-2;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1])continue;
                int left=j+1,right=n-1;
                while(left<right)
                {
                    sum=nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum==target)
                    {
                        vector<int>t;
                        t.push_back(nums[i]);
                        t.push_back(nums[j]);
                        t.push_back(nums[left]);
                        t.push_back(nums[right]);
                        s.insert(t);
                        left=left+1;
                    }
                    else if(sum>target)right-=1;
                    else left+=1;
                }
            }
        }
        for(auto it:s)
        {
            res.push_back(it);
        }
        return res;
    }
