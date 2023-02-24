///1-A, 2- B, 3-C, 4-D,.....25-Y, 26-Z
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///s="12" : [1-a, 2-b ],[ 12-l ] ...count=2
    ///s="234621" : (individual-1), [23,4,6,21],[2,3,4,6,21], [23,4,6,2,1] .....count=4
    ///if s=06 ans=0, cant be 6 because 6 is different to 06 ... if(s[0]==0)return 0 else 1.
    ///first for taking individual,a=s[i-1]-'0' and second for 2 digit number b= 10*(s[i-2]-'0')+(s[i-1]-'0')
    string s;
    cin>>s;
    int n=s.size();
    vector<int>dp(101);
    dp[0]=1;
    if(s[0]=='0')dp[1]=0;
    else dp[1]=1;

    for(int i=2;i<=n;i++)
    {
        int a=s[i-1]-'0';
        int b=10*(s[i-2]-'0')+(s[i-1]-'0');
   // cout<<a<<" "<<b<<endl;

        if(a>=1)dp[i]+=dp[i-1];
        if(b>=10 && b<=26)dp[i]+=dp[i-2];
    }
    cout<<dp[n];
}
