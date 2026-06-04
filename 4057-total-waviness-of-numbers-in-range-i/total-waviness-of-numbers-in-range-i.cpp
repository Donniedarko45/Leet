class Solution {
public:
  int count(int num, int &ans) {
    string numStr = to_string(num);
    if (numStr.size() <= 2)
      return ans;
    for (int i = 1; i < numStr.size() - 1; i++) {
      int current = numStr[i] - '0';
      int next = numStr[i + 1] - '0';
      int prev = numStr[i - 1] - '0';

      if (current > next && current > prev) {
        ans++;
      }
      if (current < next && current < prev)
        ans++;
    }
    return ans;
  }
  int totalWaviness(int num1, int num2) {
    int ans = 0;
    for (int i = num1; i <= num2; i++) {
      count(i, ans);
    }
    return ans;
  }
};