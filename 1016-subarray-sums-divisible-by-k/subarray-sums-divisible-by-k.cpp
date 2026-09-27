class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> freq(k, 0);
        freq[0] = 1;
        int prefix = 0;
        int cnt = 0;
        for (int x : nums) {
            prefix += x;
            int rem=prefix%k;
            if (rem<0) rem += k;
            cnt += freq[rem];
            freq[rem]++;
        }
        return cnt;
    }
};