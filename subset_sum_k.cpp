#include<bits/stdc++.h>
using namespace std;
///memorization
/*bool f(int ind,int target,vector<int>&arr,vector<vector<int>>&dp){

///base case
if(target==0)return true;
if(ind==0)return (arr[0]==target);
if(dp[ind][target]!=-1)return dp[ind][target];
bool nt=f(ind-1,target,arr,dp);
bool take=false;

if(arr[ind]<=target)take=f(ind-1,target-arr[ind],arr,dp);
return dp[ind][target]=take|nt;

}


bool fun(int n,int k,vector<int>&arr){


vector<vector<int>>dp(n,vector<int>(k+1,-1));
return f(n-1,k,arr,dp);



}*/

///Tabulation
bool fun(int n,int k,vector<int>&arr){

vector<vector<bool>>dp(n,vector<bool>(k+1,0));
for(int i=0;i<n;i++){
    dp[i][0]=true;
}
dp[0][arr[0]]=true;
for(int i=1;i<n;i++){
    for(int target=1;target<=k;target++){
        bool nottake=dp[i-1][target];
        bool take=false;
        if(arr[i]<=target){
            take=dp[i-1][target-arr[i]];
        }
        dp[i][target]=take|nottake;
    }
}
return dp[n-1][k];
}

int main(){

int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    if(fun(n,k,arr))cout<<"true"<<endl;
    else cout<<"false"<<endl;

}

}
