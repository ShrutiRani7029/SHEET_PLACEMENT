#include<bits/stdc++.h>
using namespace std;
///yha hmne height aur 'm' amount ko globally declare kiya hai
const int N=1e6+10;///remember agar array 10^5 se bre hai to hme use globally declare krna chahiye agar aisa nhi krenge to chances for segmentation fault.
int n;
long long m;
long long trees[N];//declare array

///predicate function that returns true / false, in this q hm paas karwaenge 'h' height pr katne wale hai, aur wo pass krega ki 'h' height pr m amnt milegi ya nhi.
bool isWoodSufficient(int h)
{
    long long wood=0;
    //cout<<trees[2];
   //cout<<h;
    for(int i=0;i<n;i++)
    {
        if(trees[i]>=h)
        {
            wood+=(trees[i]-h);
        }
    }
    cout<<wood;
    return wood>=m;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>trees[i];
    }
    long long start=0,end=1e9,mid;
    while(start<end)
    {
        mid=(start+end)/2;
        //cout<<mid;
        if(isWoodSufficient(mid))
        {
            start=mid;
        }
        else end=mid-1;
    }

   if(isWoodSufficient(end))
    {
        cout<<end<<endl;
    }
    else
        cout<<start<<endl;
}

