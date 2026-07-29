class Solution {
public:

   void possibleSet(string s, vector<vector<string>>&ans, vector<string>&temp,int pt){
          if(pt==s.size()) {
            ans.push_back(temp);
            return;
          }

          for(int i=pt;i<s.size();i++){
            if(isPalindrome(s,pt,i)){
                temp.push_back(s.substr(pt,i-pt+1));
                        possibleSet(s,ans,temp,i+1);
                        temp.pop_back();

            }
          }
   }

   bool isPalindrome(string s,int start,int end){
       while(start<=end){
        if(s[start++]!=s[end--]) {
            return false;
        }
       }
        return true;
   }
    
    vector<vector<string>> partition(string s) {
       vector<vector<string>> ans;
        vector<string>temp;
        possibleSet(s,ans,temp,0);
        return ans;

    }
};