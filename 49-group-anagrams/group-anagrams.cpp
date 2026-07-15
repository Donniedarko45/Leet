class Solution {
public:
    /*    bool isSame(string s1, string s2) {
            if (s1.size() != s2.size())
                return false;
            vector<int> freq(26, 0);
            for (char c:s1)
                freq[c-'a']++;
            for (char c:s2)
                freq[c-'a']--;
            for (int x:freq) {
                if (x != 0)
                    return false;
            }
            return true;
        }

        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            vector<vector<string>> ans;
            vector<bool> visited(strs.size(), false);

            for (int i = 0;i<strs.size(); i++) {
                if (visited[i])
                    continue;
                vector<string> groupie;
                groupie.push_back(strs[i]);
                visited[i] = true;
                for (int j =i+1;j<strs.size();j++) {
                    if (!visited[j] && isSame(strs[i], strs[j])) {
                        groupie.push_back(strs[j]);
                        visited[j] = true;
                    }
                }
                ans.push_back(groupie);
            }
            return ans;


            */
        vector<vector<string>> groupAnagrams(vector<string>& strs) {

    unordered_map<string, vector<string>> mp;
    for(string str : strs) {
        string key = str;
        sort(key.begin(), key.end());
        mp[key].push_back(str);
    }
    vector<vector<string>> ans;
    for (auto it : mp) {
        ans.push_back(it.second);
    }
    return ans;
}
};