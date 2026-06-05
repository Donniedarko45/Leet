class Solution {
public:
    int myAtoi(string s) {
        string ans;
        int i = 0;
        int n = s.size();

        while (i < n && s[i] == ' ')
            i++;

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            ans += s[i];
            i++;
        }

        while (i < n && isdigit(s[i])) {
            ans += s[i];
            i++;
        }

        if (ans.empty() || ans == "+" || ans == "-")
            return 0;

        int sign = 1;
        int start = 0;

        if (ans[0] == '-') {
            sign = -1;
            start = 1;
        } else if (ans[0] == '+') {
            start = 1;
        }

        long long num = 0;

        for (int j = start; j < ans.size(); j++) {
            int digit = ans[j] - '0';

            if (num > (LLONG_MAX - digit) / 10) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            num = num * 10 + digit;

            if (sign == 1 && num > INT_MAX)
                return INT_MAX;

            if (sign == -1 && -num < INT_MIN)
                return INT_MIN;
        }

        return sign * num;
    }
};