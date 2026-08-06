class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        /* state--> at (i,j) index bigest matrix achive krna
        transistion equation-->
if (matrix[i][j] == 0)
    dp[i][j] = 0;
else
    dp[i][j] = 1 + min({
        dp[i-1][j],
        dp[i][j-1],
        dp[i-1][j-1]
});
        */
        int rs = matrix.size();
        int cs = matrix[0].size();
        int cnt=0;
        vector<vector<int>>dp(rs,vector<int>(cs,0));
        for (int i = 0; i < rs; i++) {
            for (int j = 0; j < cs; j++) {
                 if (matrix[i][j] == 0) {
                    dp[i][j] = 0;
                } 
                else if (i == 0 || j == 0) {
                    dp[i][j] = 1;
                }
                else {
                    dp[i][j] =
                        1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
                }
                cnt+=dp[i][j];

            }
        }
        return cnt;
    }
};