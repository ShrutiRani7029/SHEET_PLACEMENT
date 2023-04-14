///erase the element -- map_name.erase(element)
#include<bits/stdc++.h>
using namespace std;

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
        map<int,int>mp;
    //bool present=false;
    int arr[n-1];
    for(int i=0;i<n;i++)
    {
        mp[v[i]]++;

    }

        mp.erase(k);


    for(auto it:mp)
    {
        cout<<it.first<<" ";
    }
    }
}
