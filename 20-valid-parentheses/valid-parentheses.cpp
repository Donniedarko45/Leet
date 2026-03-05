/*
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        unordered_map<char, char> mp = {{')', '('}, {'}', '{'}, {']', '['}};
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty() || st.top() != mp[ch]) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();

      

        for(char ch:s){
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }else{
                if (st.empty()) return false;
               if(ch==')' && st.top() =='(' ||
               ch==']' && st.top() =='[' ||
               ch=='}' && st.top() =='{' ){
                st.pop();
               }else{
                   return false;
               }
        }
        }
        return st.empty();
       
    }
};
*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int len = s.size();
        for (int i = 0; i < len; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (st.empty())
                    return false;
                else {
                    char ch = s[i];
                    if ((st.top() == '(' && ch == ')') ||
                        (st.top() == '{' && ch == '}') ||
                        st.top() == '[' && ch == ']') {
                            st.pop();
                    }else{
                        return false;
                    }
                }
            }

        }
        return st.empty();
    }
};