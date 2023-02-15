//ix->push(),r->pop(),h->peek(),Fy->search().
#include<bits/stdc++.h>
using namespace std;
void push(stack<int>st,int x)
{
    st.push(x);
}
void removec(stack<int>st)
{
    st.pop();
}
void head(stack<int>st)
{
    int d=st.top();
    cout<<d<<" ";
}
void searchc(stack<int>st,int val)
{
    if(st.search(val)!=-1){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    stack<int>st;
    int char ch;
    int a[n];
    while(n--)
    {
        int x;
        if(ch=='i')
        {
           push(st,x);
        }
        else if(ch=='r')
        {
            removec(st);
        }
        else if(ch=='h')
        {
            head(st);
        }
        else if(ch=='f')
        {
            searchc(st,x);
        }
    }
    }
}
