class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        ///heap concept
        int n=stones.size();
        priority_queue<int>mx_heap;
        ///if(n==1)return 1;
        for(int i=0;i<n;i++)mx_heap.push(stones[i]);
        int a,b;
        while(n>1)
        {
            a=mx_heap.top();///8
            mx_heap.pop();
            b=mx_heap.top();///7
            mx_heap.pop();
            n=n-2;
            ///n=4
        int c=a-b;
        if(c>0)
        {
            mx_heap.push(c);///1
            ///heap=[4,2,1,1,1]
            n=n+1;//n=5
        }
        }
        if(!mx_heap.empty())return mx_heap.top();
        return 0;
        
         
       
       
    }
};
