class Solution {
public:
    int calPoints(vector<string>& shru) {
        vector<int>v;
        for(int i=0;i<shru.size();i++)
        {
            int n=v.size();
            if(shru[i]=="+")v.push_back(v[n-1]+v[n-2]);
            else if(shru[i]=="C")v.pop_back();
            else if(shru[i]=="D")v.push_back(2*v[n-1]);
            else v.push_back(stoi(shru[i]));
        }
        int sum=0;
        for(auto s:v)sum+=s;
        return sum;
    }
};
