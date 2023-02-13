#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>num1;
    vector<int>num2;
    for(int i=0;i<2;i++)
    {
        cin>>num1[i];
    }
    for(int i=0;i<2;i++)
    {
        cin>>num2[i];
    }
    for(int i=0;i<4;i++)
    {
        cout<<num1[i]+num2[i]<<endl;
    }
}
