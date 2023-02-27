#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    vector<int>v = {2, 5};
    ll amount;
    cin>>amount;
    vector<int> n1(amount+1, INT_MAX);
    n1[0] = 0;
    for(int i=1;i<=amount;i++)
    {
        int currentMin = INT_MAX;
        for (int j = 0; j < v.size(); j++) {
            if (i - v[j] >= 0) {
                 currentMin = min(currentMin, n1[i - v[j]]);
            }
        }
        if (currentMin != INT_MAX) n1[i] = currentMin + 1;
    }

    for (long i = 0; i <= amount; i++) cout << n1[i] << " ";

    cout << n1[amount] << "\n";
}
