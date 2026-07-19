class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // 1. State
// What does dp[i] represent? --> dp[i] will return minimum cost to be on the i th index 
// 2. Transition
// How can I reach this state? dp[i]=min(dp[i-1]+cost[i-1],dp[i-2]+cost[i-2])
// 3. Base Case --->dp[0]=cost[0];
//dp[1]=cost[1]
     int n=cost.size();
     vector<int>dp(n+1);
     dp[0]=0;
     dp[1]=0;
     for(int i=2;i<=n;i++){
        dp[i]=min(dp[i-1]+cost[i-1],dp[i-2]+cost[i-2]);
     }
     return dp[n];
    }
};