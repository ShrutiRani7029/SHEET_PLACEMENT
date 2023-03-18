class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        int count=0;
        for(int i=0;i<n;i++)mp[nums[i]]++;
        for(auto it:mp)
        {
            if(it.second==1)count=it.first;
        }
        return count;
    }
};
