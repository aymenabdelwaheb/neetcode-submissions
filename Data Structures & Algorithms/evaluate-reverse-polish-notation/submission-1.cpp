class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

for (string token : tokens) {

    if (token != "+" && token!= "-" && token != "*" && token != "/") {
        st.push(stoi(token));
    } else {
        int b = st.top(); st.pop();
        int a = st.top(); st.pop();

        switch (token[0]) {
            case '+': st.push(a + b); break;
            case '-': st.push(a - b); break;
            case '*': st.push(a * b); break;
            case '/': st.push(a / b); break;
        }
    }
}

return st.top();
    }
};
