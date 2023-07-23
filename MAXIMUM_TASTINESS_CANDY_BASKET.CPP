#include<bits/stdc++.h>
using namespace std;
int fun(vector<int>&v, int k){

int n=v.size();
sort(v.begin(),v.end());

int l=0,r=1e9,ans=l;
while(l<=r){

   int mid=(l+r)/2;
   int cnt=1;
   int last=v[0];

   for(int i=1;i<n;i++){

    if(v[i]-last>=mid){
        cnt++;
        last=v[i];
    }
   }
   if(cnt>=k){
    ans=mid;
    l=mid+1;
   }
   else{
    r=mid-1;
   }

}
return ans;
}


int main(){

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++)cin>>v[i];
    int k;
    cin>>k;


    int ans=fun(v,k);
    cout<<ans<<endl;
}

}
