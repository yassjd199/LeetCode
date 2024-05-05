class Solution {
    public:
        bool isValid(string s) {
            stack<char> st;
            for (auto c : s) {
                if (c == '(' || c == '[' || c == '{') {
                    st.push(c);
                } else {
                    if (st.empty()) return 0;
                    if (c == ')') {
                        if (st.top() != '(') return 0;
                        st.pop();
                    }
                    if (c == ']') {
                        if (st.top() != '[') return 0;
                        st.pop();
                    }
                    if (c == '}') {
                        if (st.top() != '{') return 0;
                        st.pop();
                    }
                }
            }
            return (int)st.size() == 0;

        }
};