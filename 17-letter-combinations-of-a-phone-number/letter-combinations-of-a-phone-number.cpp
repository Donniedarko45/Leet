class Solution {
public:
vector<string> ans;
        vector<string> combi = {"",    "",    "abc",  "def", "ghi",
                                "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void combini(string & digits, string & temp, int ind) {
            int len = digits.length();
            if(ind==len){
                ans.push_back(temp);
                return;
            }
            int currNum = digits[ind]-'0';
            for(auto &key:combi[currNum]){
                  temp.push_back(key);
                  combini(digits,temp,ind+1);
                  temp.pop_back();       
            }
        }

    vector<string> letterCombinations(string digits) {
       // string ans = "";
       if(digits.size()==0){
        return ans;
       }
       string temp;
       combini(digits,temp,0);
       return ans;
        
        
        
    }
};