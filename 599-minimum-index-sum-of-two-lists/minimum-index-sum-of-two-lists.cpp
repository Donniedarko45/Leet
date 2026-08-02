class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1,
                                  vector<string>& list2) {
        unordered_map<string, int> mp;
       int n1=list1.size();
       int n2=list2.size();
      vector<string>ans;
        for (int i = 0; i < n1; i++) {
            mp[list1[i]] = i;
        }
        int mini = INT_MAX;
        for (int i = 0; i < n2; i++) {
            if (mp.find(list2[i]) != mp.end()) {
                int sum = mp[list2[i]] + i;
                if (sum < mini) {
                    mini = sum;
                    ans.clear();
                    ans.push_back(list2[i]);
                } else if (sum == mini) {
                    ans.push_back(list2[i]);
                }
            }
        }
        return ans;
    }
};