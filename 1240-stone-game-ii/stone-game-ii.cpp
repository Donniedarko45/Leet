class Solution {
public:
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        // state --> dp[i][m] maximum stone from i to m if (i==3) i can get 1 to 6 stones
        //d[i][m]=dp[i+1]+dp[i+2]+..dp[i+x-1] where 1<=i<=2m
        // opponent ka ho jayega dp[i+x][max(m,x)]
        for (int i=n-1;i>=0;i--) {
            for (int M = n; M>=1; M--) {
                int taken = 0;
                for (int X=1; X <= 2*M && i+X <= n; X++) {
                    taken += piles[i+X-1];
                    // If we take everything remaining
                    if (i + X == n) {
                        dp[i][M] = max(dp[i][M], taken);
                    } else {
                        // Total stones remaining after taking X
                        int remaining = 0;
                        for (int j = i + X; j < n; j++) {
                            remaining += piles[j];
                        }
                        int opponent = dp[i + X][max(M, X)];
                        int current = taken + remaining - opponent;
                        dp[i][M] = max(dp[i][M], current);
                    }
                }
            }
      }

        return dp[0][1];
    }
};