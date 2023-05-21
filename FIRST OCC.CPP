#include<bits/stdc++.h>
using namespace std;

int findSubstring(string s, string needle) {
    int n1 = s.size(), n2 = needle.size();

    // vector is not needed, we can directly access characters of the needle string
    int count = 0, i = 0, a = 0, ans = -1;

    while (i < n2 && a < n1) {
        if (needle[i] != s[a] && count == 0) {
            // if first character doesn't match, move pointer a to next character in s
            a++;
        } else if (needle[i] == s[a]) {
            // if characters match, move both pointers and increment count
            i++;
            a++;
            count++;

            if (count == n2) {
                // if all characters match, calculate and return the starting index of the substring
                ans = a - n2;
                break;
            }
        } else if (count > 0 && needle[i] != s[a]) {
            // if characters don't match and count is not zero, reset i and ans
            i = 0;
            ans = -1;
            count = 0;
        }
    }

    return ans;
}

int main() {
    string s1 = "leetleeto";
    string s2 = "leeto";

    cout << findSubstring(s1, s2) << endl;

    return 0;
}
