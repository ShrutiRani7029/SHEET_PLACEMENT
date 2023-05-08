///HACKEREARTH
#include<bits/stdc++.h>
using namespace std;

vector<int> sort_it_up (int n, vector<int> arr) {
   // Write your code here
   int c1=0,c2=0,c3=0;
   for(int i=0;i<n;i++){
    if(arr[i]==0)c1++;
    else if(arr[i]==1)c2++;
    else c3++;
   }
   vector<int>ans;
   for(int i=0;i<c1;i++)ans.push_back(0);
   for(int i=c1;i<=c1+(c2-1);i++)ans.push_back(1);
   for(int i=n-c3;i<n;i++)ans.push_back(2);

   return ans;

   
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i_arr = 0; i_arr < n; i_arr++)
    {
    	cin >> arr[i_arr];
    }

    vector<int> out_;
    out_ = sort_it_up(n, arr);
    cout << out_[0];
    for(int i_out_ = 1; i_out_ < out_.size(); i_out_++)
    {
    	cout << " " << out_[i_out_];
    }
}
