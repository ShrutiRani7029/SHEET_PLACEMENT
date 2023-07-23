#include<bits/stdc++.h>
using namespace std;

long long marbles(vector<int>&v, int k){

vector<int>store;
for(int i=1;i<v.size();i++)store.push_back(v[i]+v[i-1]);

sort(store.begin(),store.end());

int mini=0,maxi=0;

for(int i=0;i<k-1;i++){
    mini+=store[i];
}
int n=store.size();
for(int i=0;i<k-1;i++){
    maxi+=store[n-1-i];

}
return maxi-mini;

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

    long long fun=marbles(v,k);
    cout<<fun<<endl;
}
}
