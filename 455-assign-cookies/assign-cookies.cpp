class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int ans = 0;
        int idxTocheck = 0;
        int k = s.size();
        for (int i = 0; i < g.size(); i++) {
            while (true) {
                if (idxTocheck >= k) {
                    return ans;
                }
                if (s[idxTocheck] >= g[i]) {
                    ans++;
                    idxTocheck++;
                    break;
                } else {
                    idxTocheck++;
                }
            }
        }

        return ans;
    }
};