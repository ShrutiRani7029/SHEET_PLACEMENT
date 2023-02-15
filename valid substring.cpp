/*Input: S = "(()("
Output: 2
Explanation: The longest valid
substring is "()". Length = 2.*/
#include<bits/stdc++.h>
using namespace std;
int lengthfind(string s)
{
 stack<int>st;
 int count=0;
 for(int i=0;i<s.length();i++)
 {
     if(s[i]=='(')
     {
         st.push(s[i]);
     }
     while(!st.empty())
     {
         if(s[i]==')')
         {
             st.pop();
             count++;
         }
     }
    cout<<count;
 }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        lengthfind(s);
    }
}
