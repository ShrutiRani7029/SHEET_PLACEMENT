#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int parent[N];
int Size[N];

void make(int i){
parent[i]=i;
Size[i]=1;
}

int Find(int v){
    if(v==parent[v])return v;
    return parent[v]=Find(parent[v]);

}

void Union(int a,int b){
    a=Find(a);
    b=Find(b);
if(a!=b){
    if(Size[a]<Size[b])swap(a,b);
    parent[b]=a;
    Size[a]+=Size[b];
}
}



int main(){

int n,k;
cin>>n>>k;
for(int i=1;i<=n;i++)
{

    make(i);
    ///make each node as a independent node.
}

while(k--){
    int u,v;
    cin>>u>>v;
    Union(u,v); ///u,v same group me hojaenge
}
int connected_ct=0;
for(int i=1;i<=n;i++){
    if(Find(i)==i)connected_ct++;
}
cout<<connected_ct<<endl;

}
