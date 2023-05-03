#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  set<int> s;//set 
  vector<int>v;//vector

  cin >> n;//user se input

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;//input pass kraya
    s.insert(x);//set me element dala
  }
  for (int x : s) {
    cout << x << " ";//set ke elements print kr dega
  }
  for (int x : s) {
    v.push_back(x);//set ke element ko vector me dala
  }
  cout<<endl;
  int m =v.size();//yha se vector ka size
  cout<<v[m-2]<<endl;//second largest print 

  cout << endl;

  return 0;
}
