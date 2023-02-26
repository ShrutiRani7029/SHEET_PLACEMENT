class DisjointSet {
    vector<int> rank, parent, size;
public:
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int fp(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = fp(parent[node]);
    }

    void unionc(int u, int v) {
        int ulp_u = fp(u);
        int ulp_v = fp(v);
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(int u, int v) {
        int ulp_u = fp(u);
        int ulp_v = fp(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};
class Solution{
  public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts) {
        // code here
        int n=accounts.size();
        DisjointSet ds(n);
        unordered_map<string,int>mapp;
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<accounts[i].size();j++)
            {
                string mail=accounts[i][j];
                if(mapp.find(mail)==mapp.end())mapp[mail]=i;
                else
                {
                    ///if overlapping occurs then connect it-----------
                    ds.unionc(i,mapp[mail]);
                }
            }
        }
        ///task 3--->take the noded mail and put them into list of merge strings.
        vector<string>merged_mail[n];
        for(auto it:mapp)
        {
            string mail=it.first;
            int node=ds.fp(it.second);//differs
            merged_mail[node].push_back(mail);///merging
        }
        vector<vector<string>> ans;

        for (int i = 0; i < n; i++) {
            if (merged_mail[i].size() == 0) continue;
            sort(merged_mail[i].begin(), merged_mail[i].end());
            vector<string> temp;
            temp.push_back(accounts[i][0]);
            for (auto it : merged_mail[i]) {
                temp.push_back(it);
            }
            ans.push_back(temp);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
