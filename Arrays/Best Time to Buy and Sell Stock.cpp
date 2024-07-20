 int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0,minm=prices[0];
        for(int i=1;i<n;i++){
            profit=max(profit,prices[i]-minm);
            minm=min(minm,prices[i]);
        }
        return profit;
    }
