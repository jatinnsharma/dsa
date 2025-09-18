class Solution {
public:
    int minAddToMakeValid(string s) {
        // create 
        unordered_map<char, char> mp = {
            {')', '('}
        };
        // create a stack
        stack<char> st;
        // loop on string
        for (int i = 0; i < s.length(); i++) {
            // check open or close brackets
            // open brackets push into stack
            if (s[i] == '(') {
                st.push(s[i]);
            } else {
                // if close brackets then match and pop from stack else push into stack
                if (!st.empty() && st.top() == mp[s[i]]) {
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            }
        }
        return st.size();
    }
};
