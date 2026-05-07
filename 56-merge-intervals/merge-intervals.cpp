class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        int n = intervals.size();
        int i = 0;

        while (i < n) {
            int first = intervals[i][0];
            int second = intervals[i][1];
            while (i + 1 < n && second >= intervals[i + 1][0]) {
                second = max(second, intervals[i + 1][1]);
                i++;
            }
            res.push_back({first, second});
            i++;
        }

        return res;
    }
};