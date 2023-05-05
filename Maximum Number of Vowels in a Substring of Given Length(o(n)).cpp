#include<bits/stdc++.h>
using namespace std;
int isvowel(char c)
{
    if(c=='a' || c=='e'|| c=='i' ||c=='o' || c=='u')
        return 1;
    else return 0;
}

int fun(string s, int k)
{
    int n=s.size();
    int count=0,m=0;
    for(int i=0;i<n;i++)
    {
        count+=isvowel(s[i]);
        if(i>=k)
            count-=isvowel(s[i-k]);
        m=max(m,count);
    }
    return m;
}
int main()
{
     int t;
    cin>>t;
    while(t--){
    string s;
    int k;
    cin>>s>>k;
    cout<<fun(s,k);
    }
}
