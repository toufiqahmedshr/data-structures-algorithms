#include <bits/stdc++.h>
using namespace std;

string infix_to_postfix(string s) {
    stack<char> st;
    string res = "";
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            res += s[i];
        }
        else if(s[i] == '(') {
            st.push(s[i]);
        }
        else if(s[i] == ')') {
            while(!st.empty() && st.top() != '(') {
                res += st.top();
                st.pop();
            }
            if(!st.empty()) {
                st.pop();
            }
        }
        else {
            while(!st.empty() && st.top() != '(' && st.top() != ')') {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()) {
        res += st.top();
        st.pop();
    }
    return res;
}

int main() {
    string s = "a+b*(c^d-e)^(f+g*h)-i";
    cout << infix_to_postfix(s) << endl;
    return 0;
}
