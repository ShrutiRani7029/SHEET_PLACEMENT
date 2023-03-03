class Solution {
public:
int maxProfit(vector<int>& prices) {
      int n=prices.size();
      int minm=prices[0],profit=0;
      int cost=0;
      for(int i=1;i<n;i++)
      {
          cost=prices[i]-minm;
          profit=max(profit,cost);
          minm=min(minm,prices[i]);
      }
      return profit;
    }
};
