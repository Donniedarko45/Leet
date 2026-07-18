class Solution {
public:
    int climbStairs(int n) {
        // state--> so what does dp[i] exactly means 
        vector<int>dp(n+1);
        // dp[i] denotes at i th posistion what is the total possibility 
        //dp[n] will give me distinct ways to reach top

        //transistion4 equation dp[i]= dp[i-1]+dp[]
        //base case
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};