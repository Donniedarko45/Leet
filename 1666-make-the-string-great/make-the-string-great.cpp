class Solution {
public:
  string makeGood(string s) {
    if(s.empty()) return "";
    stack<char> me;
    me.push(s[0]);
    for (int i = 1; i < s.size(); i++) {
      //  char char1=me.top();
        //char char2=s[i];
      if (!me.empty() && abs(me.top()-s[i]) == 32) {
        me.pop();
      } else {
        me.push(s[i]);
      }
    }
    string ans;
  while(!me.empty() ){
      ans = ans + me.top();
      me.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
  }
};