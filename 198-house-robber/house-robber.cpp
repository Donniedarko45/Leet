class Solution {
public:
    int rob(vector<int>& nums) {
        // 1. State
        // What does dp[i] represent?

        // 2. Transition
        // How can I reach this state?

        // 3. Base Case
        // What are the smallest known answers?
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int> dp(n + 1);
        // nums[0] or nums[1] me jo jyda hoga usko le lo
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 1], nums[i] + dp[i - 2]);       
            
             }

        return dp[n-1];
    }
};