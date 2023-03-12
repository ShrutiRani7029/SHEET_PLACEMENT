class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int num=0;
      int n=nums.size();
      sort(nums.begin(),nums.end(),greater<int>());
      ///6,5,4,3,2,1
      num=nums[k-1];
      return num;
      
    }
};
