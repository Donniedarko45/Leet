class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // STATE--> dp[i] maximum profit till i th index
        // transistion equation--> dp[i]=
        /*  int n=prices.size();
      vector<int> dp(n, 0);
           int ans = 0;
           for(int i=n-2;i>=0;i--) {
               for(int j=i+1;j<n;j++) {
                   dp[i] = max(dp[i],prices[j]-prices[i]);
               }
               ans = max(ans, dp[i]);
           }
           return ans;
           */
        int n = prices.size();
        int maxi = prices[n - 1];
        int ans = 0;
        for (int i = n - 2; i >= 0; i--) {
            maxi = max(maxi, prices[i]);
            ans = max(ans, maxi - prices[i]);
        }

        return ans;
    }
};