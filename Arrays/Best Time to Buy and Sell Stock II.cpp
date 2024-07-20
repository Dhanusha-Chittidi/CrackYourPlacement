int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        
        // 1 for buy //0 for sell
        
        for(int i=n-1;i>=0;i--){
            dp[i][1]=max(-prices[i]+dp[i+1][0],dp[i+1][1]);
            
            dp[i][0]=max(prices[i]+dp[i+1][1],dp[i+1][0]);
        }
        return dp[0][1]; // returning 0th day started buying
    }
