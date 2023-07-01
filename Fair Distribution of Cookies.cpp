#include<bits/stdc++.h>
using namespace std;

int ans=INT_MAX;

void fun(int index,vector<int>&cooky,vector<int>&v,int k){

if(index>=cooky.size())///if they are able to take part in this distribution game.
{
    ///now our target is to choose the maximum element:
    int temp=*max_element(v.begin(),v.end());
    //cout<<temp;

    if(temp<ans)ans=temp;
    return;

}

///backtracking: find the best optimal ans;
for(int i=0;i<k;i++){

    v[i]=v[i]+cooky[index];
    //cout<<v[i]<<"first"<<" ";
    fun(index+1,cooky,v,k);
    //cout<<v[i]<<"second"<<" ";
    v[i]=v[i]-cooky[index];
    //cout<<v[i]<<"third"<<" ";
}


}

int distribution(vector<int>&cooky, int k){

int index=0;
///ek vector bnaenge jisme hm store krenge element ko as pre given size of k
vector<int>v(k,0);///k size jisme 0 element hai abhi.

fun(index,cooky,v,k);
return ans;


}


int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);///vector for storing element
        for(int i=0;i<n;i++)cin>>v[i];
        int k;
        cin>>k;

        int ans=distribution(v,k);
        cout<<ans<<endl;
    }
}
