#include<bits/stdc++.h>
using namespace std;

vector<int> fun(vector<int>& ar, int n) {
    vector<int> ans(n);
    int m;
    m=ar[0];
    for(int i=0; i<n; i++) {
            if(i==n-1)ans[i]=m;
            else
        ans[i] = ar[i+1];///0-2,1-3,2-4,3-5,4-1
    }

    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i=0; i<n; i++) {
        cin >> ar[i];
    }
    vector<int> ans = fun(ar, n);
    for(int i=0; i<n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}

