class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }

        for(auto it:mp)
        {
            if(it.second==1)j=it.first;
        }
        return j;
    }
};
