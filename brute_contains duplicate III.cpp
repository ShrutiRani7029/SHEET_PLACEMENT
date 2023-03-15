class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int j, int i) {
        if(i==j)return false;
        if(abs(i-j)>j)return false;
        if(abs(nums[i]-nums[j])>i)return false;
        return true;
    }
};
