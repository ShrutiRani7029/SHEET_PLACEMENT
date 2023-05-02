#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  set<int> s;

  cin >> n;

  for (int i = 0; i < n; i++) {
   int x;
    cin >> x;
    s.insert(x);
  }

  for (int x : s) {
    cout << x << " ";
  }

  cout << endl;

  return 0;
}
