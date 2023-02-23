#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];
    int ans=INT_MIN,sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=nums[i];
        ans=max(sum,ans);
        if(sum<0)sum=0;
    }
    cout<<ans;

}
