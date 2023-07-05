//Minimum Number of Vertices to Reach All Nodes
///NICE AND EAsY QUESTION ONLY WE HAVE TO UNDERSTAND THE QUESTION PROPERLY
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        ///IF INDEGREE=0 then it means that set of vertices able  to reach each nodes
       /* vector<int>ans;
        vector<int>indegree(n,0);

        for(auto it:edges){
           indegree[it[1]]+=1;///as indegree={0,1}, 1 considered as 2nd element
        }

        for(int i=0;i<n;i++){
            if(indegree[i]==0)ans.push_back(i);
        }
        return ans;*/
        vector<int>ans;
        vector<int>indeg(n,0);

        for(auto it:edges){
            indeg[it[1]]+=1;
        }
        ///indegree=0 , push vertex to the ans;
        for(int i=0;i<n;i++)
        {
            if(indeg[i]==0)
            ans.push_back(i);
            }

        return ans;
    }
};
