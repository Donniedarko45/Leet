class Solution {
public:
    int isPresentAndCount(int i, vector<int>& A, vector<int>& B) {
        // checking agr A[i] present hai B me hai index i tak
        int count = 0;
        for (int j = 0; j <= i; j++) {
            for (int k = 0; k <= i; k++) {
                if (A[j] == B[k]) {
                    count++;
                }
            }
        }
        return count;
    }

    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> ans(n, 0);
        for (int i = 0; i < A.size(); i++) {
        ans[i] = isPresentAndCount(i,A, B);
       
        }
        return ans;
    }
};