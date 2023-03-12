class Solution {
public:
    int thirdMax(vector<int>& nums) {
         priority_queue <int> pq;

        unordered_set <int> us(nums.begin(), nums.end());

        for(auto x: us)
            pq.push(x);

        if(pq.size() < 3)
          return pq.top();

        int count = 0;
        while(pq.size() && count != 2)
        {
            count++;
            pq.pop();
        }

        return pq.top();
    }
};
