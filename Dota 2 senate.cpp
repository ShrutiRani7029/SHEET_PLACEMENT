class Solution {
public:
    string predictPartyVictory(string senate) {
        ///RDRDD: D
        ///RDDR: R
        queue<int>r,d;
        int n=senate.length();

        for(int i=0;i<n;i++)
        {
            if(senate[i]=='R')
            r.push(i);
            else d.push(i);
        }


        while(!d.empty() && !r.empty()){

            int a=r.front(),b=d.front();
            ///now condition follows in that way so that if r banned d then r comes to last and same procedure done with d, means if d banned r then d comes to end.
            r.pop(),d.pop();
            if(a<b)r.push(a+n);
            else d.push(b+n);
        }

        if(r.size()>d.size())return "Radiant";
        else return "Dire";
    }
};
