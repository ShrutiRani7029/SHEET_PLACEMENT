///map --> map_name.count(key k)
#include<bits/stdc++.h>
using namespace std;
bool fun(vector<int>&v,int n,int target)
{
    map<int,int>mp;
    bool present=false;
    for(int i=0;i<n;i++)
    {
        mp[v[i]]++;

    }
    for(int i=0;i<n;i++)
    {
        if(mp.count(target))present=true;
    }
    return present;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    if(fun(v,n,k))cout<<"key is present"<<endl;
    else cout<<"key is not present"<<endl;
    }
}
