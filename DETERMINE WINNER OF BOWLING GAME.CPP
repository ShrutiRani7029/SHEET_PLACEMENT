#include<bits/stdc++.h>
using namespace std;


/*int fun(vector<int>&p1,vector<int>&p2){
int n=p1.size();
int m=p2.size();
int s1=0,s2=0;
int c1=0,c2=0;
int k,j;
for(int i=0;i<n;i++)
{
    if(p1[i]!=10)
    {
        s1+=p1[i];
    }
    else
    {
        s1+=p1[i];
        k=i;
        c1=1;
        break;
    }

}
if(c1==1)
{
for(int i=k+1;i<n;i++)
{
    s1+=(2*p1[i]);
}}
///......
for(int i=0;i<n;i++)
{
    if(p2[i]!=10)
    {
        s2+=p2[i];
    }
    else
    {
        s2+=p2[i];
        j=i;
        c2=1;
        break;
    }

}
if(c2==1){
for(int i=j+1;i<n;i++)
{
    s2+=(2*p2[i]);
}}

 cout<<s1<<" "<<s2<<endl;

}*/

    int fun(vector<int>& p1, vector<int>& p2) {
        int a = 0, b = 0;
        for(int i = 0; i < p1.size(); i++) {
            if(i == 0) {
                a += p1[i];
                b += p2[i];
            }
            else {
                if(i == 1) {
                    if(p1[i - 1] == 10) a += (2 * p1[i]);
                    else a += p1[i];
                    if(p2[i - 1] == 10) b += (2 * p2[i]);
                    else b += p2[i];
                }
                else {
                    if(p1[i - 1] == 10 || p1[i - 2] == 10) a += (2 * p1[i]);
                    else a += p1[i];
                    if(p2[i - 1] == 10 || p2[i - 2] == 10) b += (2 * p2[i]);
                    else b += p2[i];
                }
            }
        }
        if(a > b) return 1;
        if(a < b) return 2;
        return 0;
    }

int main(){

int t;
cin>>t;
while(t--)
{
vector<int>p1(4);
vector<int>p2(4);
for(int i=0;i<4;i++)cin>>p1[i];
for(int i=0;i<4;i++)cin>>p2[i];
cout<<fun(p1,p2);
}
}
