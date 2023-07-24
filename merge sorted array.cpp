///MERGE SORTED array
#include<bits/stdc++.h>
using namespace std;

void fun(vector<int>&v1, vector<int>&v2, int m, int n){

for (int i = 0; i < v2.size(); ++i) {
        v1[i + m] = v2[i];
    }
sort(v1.begin(),v1.end());

}



int main(){

int t;
cin>>t;
while(t--){

    int a,b;
    cin>>a>>b;
    vector<int>v1(a);
    vector<int>v2(b);

    for(int i=0;i<a;i++){
        cin>>v1[i];
    }
    for(int j=0;j<b;j++)cin>>v2[j];


    int m,n;
    cin>>m>>n;
    int s=m+n;


     fun(v1,v2,m,n);

    for(int i=0;i<s;i++)cout<<v1[i]<<" ";
    cout<<endl;

}

}
