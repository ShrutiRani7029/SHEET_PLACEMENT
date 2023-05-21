#include<bits/stdc++.h>
using namespace std;

int isWinner(vector<int>& player1, vector<int>& player2) {
        int n=player1.size();
        int m=player2.size();
        int s1=0,s2=0;
        int j,k;
        ///for player1
        for(int i=0;i<n;i++)
        {
            if(player1[i]==10)
            {
                s1+=10;
                j=i;
                break;
            }
            else s1+=player1[i];
        }
        if(player1[j]==10)
        {
        for(int a=j+1;a<n;a++)
        {
            s1+=(2*player1[a]);
        }
        }
        //cout<<s1<<endl;
        ///for player2
        for(int i=0;i<n;i++)
        {
            if(player2[i]==10)
            {
                s2+=10;
                k=i;
                break;
            }
            else s2+=player2[i];
        }
        if(player2[k]==10)
        {
        for(int a=k+1;a<n;a++)
        {
            s2+=(2*player2[a]);
        }
        }
        //cout<<s2<<endl;
        if(s1>s2)return 1;
        else if(s1<s2)return 2;
        else return 0;

    }
int main(){
    int n;
cin>>n;
vector<int>v1(n);
vector<int>v2(n);

for(int i=0;i<n;i++)cin>>v1[i];
for(int j=0;j<n;j++)cin>>v2[j];
cout<<isWinner(v1,v2);

}
