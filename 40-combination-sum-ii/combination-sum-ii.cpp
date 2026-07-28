class Solution {
public:
    void combi(vector<int>& candidates, int target, vector<int>& temp,
               vector<vector<int>>& ans, int j) {

        // if target==0 toh ans mil gya return kr do

        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        // take not take..
        // take me bhi badhao index as same number index nai hoga
        for (int i = j; i < candidates.size(); i++) {
            // Skip duplicates at the same recursion level
            if (i > j && candidates[i] == candidates[i - 1])
                continue;
            if (candidates[i] > target)
                break;
            // Choose
            temp.push_back(candidates[i]);
            // Move to next index because each element can be used only once
            combi(candidates, target - candidates[i],  temp, ans,i+1);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        combi(candidates, target, temp, ans, 0);
        return ans;
    }
};