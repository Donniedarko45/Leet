class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1);
        // have to calculate total set 1 bits
        ans[0] = 0;
        int totBit = 0;
        for (int i = 1; i <= n; i++) {
            ans[i] = ans[i & (i - 1)] + 1;
        }
        return ans;
    }
};