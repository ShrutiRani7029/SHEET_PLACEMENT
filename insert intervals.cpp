class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
       
        vector<vector<int>> ret;

        for(auto& i : intervals){

            // current interval should come before new interval
            if(i[1] < newInterval[0]) ret.push_back(i);

            // new interval should come befrore current interval
            else if(newInterval[1] < i[0]){
                ret.push_back(newInterval);
                newInterval = i;
            }

            // new interval overlaps
            else{
                newInterval[0] = min(newInterval[0], i[0]);
                newInterval[1] = max(newInterval[1], i[1]);
            }
        }
        ret.push_back(newInterval);  // add last new interval

        return ret;
    }
};

///driver function-------------------------
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>>intervals(n);
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            intervals[i].push_back(x);
            intervals[i].push_back(y);
        }
        vector<vector<int>>newInterval(1);
        for(int i=0;i<1;i++)
        {
            int x,y;
            cin>>x>>y;
            hello[i].push_back(x);
            hello[i].push_back(y);
        }
         vector<vector<int>>ans=insert(intervals,newInterval);
    for(auto i:ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
    }
    cout<< "\n";
    }
}
