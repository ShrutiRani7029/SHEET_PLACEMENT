class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<strs.size();i++)
        {
            string cur = strs[i];
            sort(cur.begin(),cur.end());
            mp[cur].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto el:mp)
        {
            result.push_back(el.second);
        }
        return result;
    }
};
