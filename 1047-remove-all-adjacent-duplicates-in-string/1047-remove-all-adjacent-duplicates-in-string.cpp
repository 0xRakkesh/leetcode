class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (st.empty()) {
                st.push(s[i]);
            } else {
                if (st.top() == s[i]) {
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            }
        }
        string s_new;
        int n = st.size();
        for (int i = 0; i < n; i++) {
            s_new.push_back(st.top());
            st.pop();
        }
        reverse(s_new.begin(), s_new.end());
        return s_new;
    }
};