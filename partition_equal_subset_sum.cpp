#include<bits/stdc++.h>
using namespace std;

bool fun(vector<int>&v,int n,int k){
vector<vector<int>>dp(n,vector<int>(k+1,0));

for(int i=0;i<n;i++){
    dp[i][0]=true;
}
dp[0][v[0]]=true;

for(int i=1;i<n;i++){
    for(int target=1;target<=k;target++){
        bool nottake=dp[i-1][target];
        bool take=false;
        if(v[i]<=target)
        take = dp[i-1][target-v[i]];
        dp[i][target]=take|nottake;
    }
}
return dp[n-1][k];

}
bool game(int n,vector<int>&arr){

int totsum=0;
for(int i=0;i<n;i++){
        totsum+=arr[i];
}
if(totsum%2)
{return false;
//cout<<"j";
}

    int d=totsum/2;

return fun(arr,n,d);

}


int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    if(game(n,v))cout<<"true"<<endl;
    else cout<<"false"<<endl;
}

}
