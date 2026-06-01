class Solution {
public:
  string removeDuplicates(string s) {
    stack<char> me;
    for (int i = 0; i < s.size(); i++) {
       if(!me.empty() && (me.top()==s[i])){
        me.pop();
      }else{
        me.push(s[i]);
      }
    }
    string ans;
    while(!me.empty()){
      ans= ans+me.top();
      me.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
  }
};