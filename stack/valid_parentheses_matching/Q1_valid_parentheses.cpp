class Solution {
public:
    bool isValid(string s) {
        // create stack
        stack<char> st;
        // store string brackets in unordered_map
        unordered_map<char, char> mp = {{')', '('}, {'}', '{'}, {']', '['}};

        // loop over string
        for (char c : s) {
            // if opening brackets push on stack
            if (c == '{' || c == '[' || c == '(') {
                st.push(c);
            }
            // else if closing -> check match and pop
            else {
                if (st.empty() || st.top() != mp[c]) {
                    return false;
                }

                st.pop();
            }
        }

        return st.empty();
    }
};