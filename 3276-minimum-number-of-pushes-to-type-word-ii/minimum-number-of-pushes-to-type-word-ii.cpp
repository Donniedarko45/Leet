class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int> str;
        for (char c : word) {
            str[c]++;
        }
        vector<pair<char, int>> v;
        for (auto it : str) {
            v.push_back(it);
        }
        sort(v.begin(), v.end(), [](pair<char, int> &a, pair<char, int> &b) {
            return a.second > b.second;
        });
        int cnt = word.size();
        int i = 0;
        for (auto it : v) {
            if (i >= 8 && i <= 15) {
                cnt += it.second;
            }
            else if (i >= 16 && i <= 23) {
                cnt += 2 * it.second;
            }
            else if (i >= 24) {
                cnt += 3 * it.second;
            }
            i++;
        }
        return cnt;
    }
};