#include<bits/stdc++.h>
using namespace std;

int fun2(vector<int>&v,vector<int>&dp,int n){
dp[0]=v[0];
for(int i=1;i<n;i++){

    int pick=v[i];
    if(i>1)pick+=dp[i-2];
    int notpick = 0+dp[i-1];

    dp[i]=max(pick,notpick);
}
return dp[n-1];

}


int fun(vector<int>&v){
    int n=v.size();
vector<int>dp(n,-1);
return fun2(v,dp,n);

}

int main(){

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    cout<<fun(v)<<endl;
}
}
