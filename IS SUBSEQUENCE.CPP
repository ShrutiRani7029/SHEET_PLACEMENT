#include<bits/stdc++.h>
using namespace std;
bool subsequence(string s, string t){
int n=s.size();
int m=t.size();
if(n>m)return false;

else{
        int i=0,j=0,count=0;
    while(i<n && j<m){
        if(s[i]==t[j])
        {

            i++;
            j++;
            count++;
        }
        else j++;
    }
    if(count==n)return true;
    else return false;
}

}
int main()
{

    string s,t;
    cin>>s>>t;
    if(subsequence(s,t))cout<<"true";
    else cout<<"false";
}
