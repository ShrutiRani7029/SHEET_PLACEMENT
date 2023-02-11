#include<bits/stdc++.h>
using namespace std;

int solve(int n,int m,int i)
{
    int ans=0;
    if(i>m)return 0;
    if(i>=n && i<=m)
    {
        ans++;
    }
    int rem=i%10;
    if(rem!=0)ans+=solve(n,m,(i*10)+(rem-1));
        if(rem!=9)ans+=solve(n,m,(i*10)+(rem+1));
    return ans;
}
int fun(int n,int m)
{

    int count=0;
    if(n==0)count++;
    for(int i=1;i<=9;i++)
    {
       count=count+solve(n,m,i);
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,m;
        cin>>n>>m;
        cout<<fun(n,m)<<endl;
    }
}
