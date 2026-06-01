class Solution {
public:
  int minimumCost(vector<int> &cost) {
    sort(cost.begin(), cost.end());
    int minCost = 0;
    int n = cost.size() - 1;
    int skip = 0;
    for (int i = n; i >= 0; i--) {
      if (skip == 2) {
        skip = 0;
        continue;
      } else {
        minCost = minCost + cost[i];
        skip++;
      }
    }
    return minCost;
  }
};