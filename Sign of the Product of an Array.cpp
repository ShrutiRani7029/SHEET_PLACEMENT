class Solution {
public:
    int arraySign(vector<int>& nums) {
        int pos=0,neg=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0)neg++;
            else if(nums[i]>0)pos++;
            else return 0;
        }
       if(neg%2!=0)return -1;
       else return 1;
    }
};
