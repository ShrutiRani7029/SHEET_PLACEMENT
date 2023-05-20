#include<bits/stdc++.h>
using namespace std;
vector<int>fun(int a1[],int a2[],int a3[],int n1,int n2,int n3){
    
    vector<int>ans;
    int x=0,y=0,z=0;
    while(x!=n1 && y!=n2 && z!=n3){
        
        int a=a1[x];
        int b=a2[y];
        int c=a3[z];
        
        if(a==b && b==c){
            ans.push_back(a);
            x+=1;
            y+=1;z+=1;
        }
        else if(a<=b && a<=c)x+=1;
        else if(b<=a && b<=c)y+=1;
        else z+=1;
        
        
    }
    return ans;
}

int main(){
    
   int n1,n2,n3;
   cin>>n1>>n2>>n3;
    
    int a[n1],b[n2],c[n3];
    for(int i=0;i<n1;i++)cin>>a[i];
    for(int i=0;i<n2;i++)cin>>b[i];
    for(int i=0;i<n3;i++)cin>>c[i];
    
    vector<int>ans=fun(a,b,c,n1,n2,n3);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    
    
    
    
}
