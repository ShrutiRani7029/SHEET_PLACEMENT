class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
         string ans="";
    for(int i=0;i<s[0].size();i++){///only for the first string
            char ch=s[0][i];///flower
            bool same=true;
       for(int j=1;j<s.size();j++){///rest of the string

       if(s[j].size()<i || ch!=s[j][i])
       {same=false;
       break;
       }
       }

    if(same==false)break;
    else ans.push_back(ch);
    }
    return ans;
    }
};
