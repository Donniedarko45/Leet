class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
       /* int size = coins.size();
        // ways
        int ways = 0;
        sort(coins.begin(), coins.end());
        int req = amount;
       if(size==1 && amount%coins[size-1]!=0) {
        return -1;
       }
        while (req > 0) {

            for (int i = size - 1; i >= 0; i--) {
                if (coins[i] <= req) {
                    ways++;
                    req = req - coins[i];
                    break;
                }
            }
        }
        return ways;

        */
         // state --> dp[i] mai pehle se kam leke chal rha bc
         // like 1 me 1 le lo dp[4] me agr 4 nai h toh 3 le lo agr 3 nai toh 2 le lo
         vector<int>dp(amount+1,amount+1);
        // transisition equation would be like min(dp[i],dp[i-coin]+1)
        
        dp[0] = 0;

        for (int i = 1; i <= amount; i++) {
            for (int coin : coins) {
                if (coin <= i) {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }

        return dp[amount] == amount + 1 ? -1 : dp[amount];
    }
};