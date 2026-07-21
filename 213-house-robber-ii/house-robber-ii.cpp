class Solution {
public:
    int solve(const vector<int>& nums, int start, int end) {
        int length = end - start + 1;
        if (length <= 0)
            return 0;
        if (length == 1)
            return nums[start];
        vector<int> dp(length);
        dp[0] = nums[start];
        dp[1] = max(nums[start], nums[start + 1]);
        for (int i = 2; i < length; i++) {
            dp[i] = max(dp[i - 1], nums[start + i] + dp[i - 2]);
        }
        return dp[length - 1];
    }
    int rob(vector<int>& nums) {
        // state :- dp[i] max money till ith state
        // transistion equation:-
        // dp[i]= max(nums[i]+dp[i-2],dp[i-1])
        // dp[0]=nums[0]
        // dp[1]=max(nums[1],dp[0])
        // one condition to be noticed about the i=0 and i=n-1 case..ekk baar 0
        // to n-2 and 1 to n-1 se call kr lo
        int n = nums.size();
        if(n==1) return nums[0];
        int first = solve(nums, 0, n - 2);
        int second = solve(nums, 1, n - 1);
        return max(first, second);
    }
};