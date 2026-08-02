class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int totSum = accumulate(nums.begin(), nums.end(), 0);
        if (totSum % 2 != 0)
            return false;
        int toFind = totSum / 2;
        // state:- dp[i][remaining] from i can we form the remaining value
        // transistion equation:-
        vector<vector<bool>>dp(n+ 1,vector<bool>(toFind+1,false));
        for (int i = 0; i <= n; i++)
            dp[i][0] = true;
        for (int i=1;i<=n;i++){
    for (int j = 0; j <= toFind; j++) {
        dp[i][j]=dp[i-1][j];
        if (j >= nums[i-1])
            dp[i][j]=dp[i][j] || dp[i-1][j-nums[i-1]];
    }
}
        return dp[n][toFind];
    }
};