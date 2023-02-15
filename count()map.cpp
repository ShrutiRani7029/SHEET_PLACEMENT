#include <bits/stdc++.h>
using namespace std;

int main()
{

    // initialize container
    map<int, int> mp;

    // insert elements in random order
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 1, 80 });
    mp.insert({ 3, 60 });
    mp.insert({ 4, 20 });
    mp.insert({ 5, 50 });

    // checks if key 2 is present or not
    if (mp.count(2))
        cout << "The key 2 is present\n";
    else
        cout << "The key 2 is not present\n";

    // checks if key 100 is present or not
    if (mp.count(100))
        cout << "The key 100 is present\n";
    else
        cout << "The key 100 is not present\n";

    return 0;
}
