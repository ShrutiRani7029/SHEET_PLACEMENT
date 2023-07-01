class Solution {
public:
    string reverseWords(string s) {
    int n = s.size();
    stack<string> st;
    for (int i = 0; i < n; i++) {
        string temp = "";
        int j = i;
        while (j < n && s[j] != ' ') {
            temp += s[j];
            j++;
        }
        i = j;
        if (!temp.empty()) {
            st.push(temp);
        }
    }
    string ans = "";
    while (!st.empty()) {
        ans += st.top();
        st.pop();
        if (!st.empty()) {
            ans += " ";
        }
    }
    return ans;
}
};
