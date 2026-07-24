class Solution {
public:
    // index le lo for tracking will see how it works{just having intution
    // babyy}

    void solve(int start, vector<int>& nums, vector<vector<int>>& result) {
        if (start == nums.size()) {
            result.push_back(nums);
            return;
        }
        for (int i = start; i < nums.size(); ++i) {
            swap(nums[start], nums[i]);
            solve(start + 1, nums, result);
            swap(nums[start], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        solve(0, nums, result);
        return result;
    }
};