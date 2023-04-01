class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
      
    int n = s.size();
    unordered_map<char, int> mp;
    for (int i = 0; i < chars.size(); i++) {
        mp[chars[i]] = vals[i];
    }
    int left = 0, right = 0, cost = 0, maxCost = 0;
    while (right < n) {
        if (mp.count(s[right])) {
            cost += mp[s[right]];
        } else {
            cost += s[right] - 'a' + 1;
        }
        while (left <= right && cost < 0) {
            if (mp.count(s[left])) {
                cost -= mp[s[left]];
            } else {
                cost -= s[left] - 'a' + 1;
            }
            left++;
        }
        maxCost = max(maxCost, cost);
        right++;
    }
    return maxCost;
}
 
    
};
