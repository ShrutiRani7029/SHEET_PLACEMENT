#include<bits/stdc++.h>
using namespace std;
int fun(string s, int k) {


         int count=0;
         int m=INT_MIN;
         int n=s.size();
        ///aeiou
        for(int i=0;i<n;i++)
        {
             for(int j=i;j<k;j++){
                 if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
                    count++;
                // cout<<s[j]<<" ";
             }
            // cout<<endl;
            // cout<<count<<endl;
             k=k+1;
             m=max(m,count);
             //cout<<m<<endl;
             count=0;
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
