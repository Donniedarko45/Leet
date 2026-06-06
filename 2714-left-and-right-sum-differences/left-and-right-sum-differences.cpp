class Solution {
public:
  vector<int> leftRightDifference(vector<int> &nums) {
       int n = nums.size();
    vector<int> ans(n);
    vector<int> leftSum(n);
    vector<int> rightSum(n);
 
    for (int i = 0; i < n; i++) {
      if (i == 0) {
        leftSum[i] = 0;
        rightSum[i] = accumulate(nums.begin(), nums.end(), 0);
      }
      leftSum[i] = accumulate(nums.begin(), nums.begin()+i, 0);
      rightSum[i] = accumulate(nums.begin() + i+1, nums.end(), 0);
      ans[i] = abs(leftSum[i] - rightSum[i]);
    }
    return ans;
  }
};