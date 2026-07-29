class Solution {
public:
    vector<int> solve(string expr) {
        vector<int> ans;
        for (int i = 0; i < expr.size(); i++) {
            if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*') {
                string left = expr.substr(0, i);
                string right = expr.substr(i + 1);
                vector<int> leftAns = solve(left);
                vector<int> rightAns = solve(right);

                for (int l : leftAns) {
                    for (int r : rightAns) {
                        if (expr[i] == '+')
                            ans.push_back(l + r);

                        else if (expr[i] == '-')
                            ans.push_back(l - r);
                        else
                            ans.push_back(l * r);
                    }
                }
            } }
        if (ans.empty()) {
            ans.push_back(stoi(expr));
        }
        return ans;
    }
    vector<int> diffWaysToCompute(string expression) {
        return solve(expression);
    }
};