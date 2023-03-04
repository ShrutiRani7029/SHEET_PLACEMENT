#include<bits/stdc++.h>
using namespace std;
///const int N=1e5+10;
///vector<int>graph[N];
unordered_map<int,vector<int>>mp;
int ans=0;
int mx=0;
void dfs(int manager,vector<int>&informtime)
{
    mx=max(mx,ans);
    for(auto employee:mp[manager])
    {
        ans+=informtime[manager];
        ///cout<<informtime[manager]
        dfs(employee,informtime);
        ans-=informtime[manager];
    }
}
int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {


    for(int i=0;i<n;i++)
    {
        int num=manager[i];
        if(num!=-1)///not head
        mp[num].push_back(i);///adjacency list
    }
    dfs(headID,informTime);
    return mx;
}
int main()
{
    int n;
    cin>>n;
    int headid;
    cin>>headid;
    int m=INT_MIN;
    vector<int>manager(n),informtime(n);
    for(int i=0;i<n;i++)cin>>manager[i];
    for(int i=0;i<n;i++)cin>>informtime[i];
    cout<<numOfMinutes(n,headid,manager,informtime);


}
