#include<bits/stdc++.h>
using namespace std;
void dfs(string s,string d, unordered_map<string,vector<pair<string,double>>>mp,unordered_map<string,int>&visited, double &ans,double temp)
{
    if(visited.count(s))return;
    if(s==d)
    {
        ans=temp;
        return;
    }
    visited[s]=1;
    for(auto child:mp[s])
    {
        dfs(child.first,d,mp,visited,ans,temp*child.second);
        cout<<child.first<<"----"<<child.second<<"-----"<<temp<<"----"<<temp*child.second<<endl;
    }
    return;
}

    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {

     unordered_map<string,vector<pair<string,double>>>mp;
     for(int i=0;i<equations.size();i++)
     {
         mp[equations[i][0]].push_back({equations[i][1],values[i]});
         mp[equations[i][1]].push_back({equations[i][0],1.0/values[i]});
     }
       vector<double>finalans;

         for(int i=0;i<queries.size();i++)
         {
             string src=queries[i][0];
             string desc=queries[i][1];


             unordered_map<string,int>visited;
             double ans=-1.0;
             double temp=1;
             if(mp.count(src))
             dfs(src,desc,mp,visited,ans,temp);
             finalans.push_back(ans);
         }

     return finalans;



    }
int main() {
    // Example
    vector<vector<string>> equations;
    vector<string> eq1;
    eq1.push_back("a");
    eq1.push_back("b");
    equations.push_back(eq1);
    vector<string> eq2;
    eq2.push_back("b");
    eq2.push_back("c");
    equations.push_back(eq2);

    vector<double> values;
    values.push_back(2.0);
    values.push_back(3.0);

    vector<vector<string>> queries;
    vector<string> q1;
    q1.push_back("a");
    q1.push_back("c");
    queries.push_back(q1);
    vector<string> q2;
    q2.push_back("b");
    q2.push_back("a");
    queries.push_back(q2);
    /*vector<string> q3;
    q3.push_back("a");
    q3.push_back("e");
    queries.push_back(q3);
    vector<string> q4;
    q4.push_back("a");
    q4.push_back("a");
    queries.push_back(q4);
    vector<string> q5;
    q5.push_back("x");
    q5.push_back("x");
    queries.push_back(q5);*/

    vector<double> ans = calcEquation(equations, values, queries);
    for (int i = 0; i < ans.size(); i++) {
        cout<<ans[i]<<" ";
    }

    return 0;
