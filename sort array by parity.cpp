class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int n=nums.size()-1;
    for(int i = 0; i<n; i++){

        if(nums[i]%2 == 1 )
        swap( nums[i--], nums[n--] );
    }
    return nums;
    }
};
