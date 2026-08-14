class Solution {
public:
    int jump(vector<int>& nums) {
     //state dp[i] minimum steps to required to reach index i   
      // transistion equation ==> i to i+1 ,i+2 till nums[i]
      // for(j=i+1;j<=i+nums[i];j++){
      //  dp[j]=min(dp[j],dp[i]+1)
      //}
      int n= nums.size();
       vector<int>dp(n,INT_MAX);
    dp[0]=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=i+nums[i]&&j<n;j++){
            dp[j]=min(dp[j],dp[i]+1);
        }
    }
    return dp[n-1];
    }
};