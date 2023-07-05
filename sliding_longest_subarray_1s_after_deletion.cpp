class Solution {
public:
    int longestSubarray(vector<int>& nums) {
         int j = 0, n = nums.size();
    unordered_map<int, int> mp;
    bool zeroDeleted = false;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        mp[nums[i]]++;
        while (mp[0] > 1)
        {
            zeroDeleted = true;
            mp[nums[j]]--;
            j++;
        }
        if (mp[0] == 0)
        {
            ans = max(ans, i - j + 1);
        }
        else if (mp[0] == 1)
            ans = max(ans, i - j);
    }
    if (!zeroDeleted&&mp[0]==0)
    {
        ans--;
    }
    return ans;
    }
};
