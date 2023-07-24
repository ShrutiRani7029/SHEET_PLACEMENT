#include<bits/stdc++.h>
using namespace std;

int fun(vector<int>& v, int val) {
    for (auto it = v.begin(); it != v.end();) {
        if (*it == val) {
            it = v.erase(it);
        } else {
            ++it;
        }
    }

    int n = v.size();
    return n;
}



int main(){

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
       cin>>v[i];
    }
    int val;
    cin>>val;
    cout<<fun(v,val)<<endl;

}
}




