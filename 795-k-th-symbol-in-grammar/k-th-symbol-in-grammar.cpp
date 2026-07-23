class Solution {
public:
    int kthGrammar(int n, int k) {
        if (k == 1)
            return 0;
        //  int temp=0;
        if (k % 2 == 0) {
            return 1 - kthGrammar(n, k / 2);
        } else {
            return kthGrammar(n, (k + 1) / 2);
        }
    }
};