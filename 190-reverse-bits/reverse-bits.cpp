class Solution {
public:
    int reverseBits(int n) {

       
        vector<int> ans;

    
        for(int i = 0; i < 32; i++) {
            ans.push_back(n % 2);
            n /= 2;
        }

        int reverseBit = 0;

        for(int i = 0; i < 32; i++) {

            if(ans[i] == 1) {
                reverseBit += (1LL << (31 - i));
            }
        }

        return reverseBit;
    }
};