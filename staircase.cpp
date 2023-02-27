#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<int>num={2,4};

    ll hs;
    cin>>hs;
    vector<bool>dp(hs+1,false);
    dp[0]=true;
    for(int j=0;j<hs;j++)
    {
        if(dp[j]==true)
        {
            for(int i=0;i<2;i++)
            {
                if(j+num[i]<=hs)
                {
                    dp[j+num[i]]=true;
                }
            }
        }
    }
    if(dp[hs]==true)cout<<"yes";
    else
        cout<<"no";
}
