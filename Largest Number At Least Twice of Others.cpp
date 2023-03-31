class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        //sort(nums.begin(),nums.end());///0,1,3,6
        int m=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>m)m=nums[i];//6
        }
        int s;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==m)s=i;
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]*2>m && i!=s)
            {
                count=-1;
                break;
            }
            else if(nums[i]*2<=m && i!=s)
            {
                count=1;
            }
        }
        if(count==-1)return -1;
        else return s;
    }
};
