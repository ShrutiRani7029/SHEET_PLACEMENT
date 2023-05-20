#include<bits/stdc++.h>
using namespace std;
vector<int>fun(vector<int>&a,vector<int>&b,vector<int>&c,int n1,int n2,int n3){
     vector<int>ans;
    map<int,int>mp;
    
    for(int i=0;i<n1;i++)
    {cin>>a[i];
    mp[a[i]]++;
    }
    for(int i=0;i<n2;i++)
    {cin>>b[i];
    mp[b[i]]++;
    }
    
    for(int i=0;i<n3;i++)
    {cin>>c[i];
    mp[c[i]]++;
    }
    
    for(auto it:mp){
        if(it.second==3)
        ans.push_back(it.first);
    }
    return ans;
    
}
int main(){
    
   int n1,n2,n3;
   cin>>n1>>n2>>n3;
    
    vector<int>a(n1),b(n2),c(n3);
    
    vector<int>ans=fun(a,b,c,n1,n2,n3);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    
    
    
    
}
