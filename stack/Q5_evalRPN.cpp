class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        unordered_map<string, function<int(int, int)>> op = {
            {"+", [](int a, int b) { return b + a; }},
            {"-", [](int a, int b) { return b - a; }},
            {"/", [](int a, int b) { return b / a; }},
            {"*", [](int a, int b) { return b * a; }},
        };

        for (const string& token : tokens) {
            if (op.count(token)) {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(op[token](a, b));
            } else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};