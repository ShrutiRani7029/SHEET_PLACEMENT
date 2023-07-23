#include<bits/stdc++.h>
using namespace std;

int fun(vector<int>&v){

int n=v.size();
int m=0,j=n-1,i=0;

while(i<j){
   int s=j-i;
   int num=min(v[i],v[j]);
   m=max(m,num*s);


   ///condition:
   if(v[i]<v[j])i++;
   else j--;


}
return m;


}



int main(){
int t;
cin>>t;
while(t--){
        int n;
cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    int ans=fun(v);
    cout<<ans<<endl;
}


}
