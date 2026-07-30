#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s) {
            if(c =='(' || c == '{' || c == '['){
                st.push(c);
            } else {
                if(st.empty()) return false;
                if(c == ')' && st.top() != '(') return false;
                if(c == '}' && st.top() != '{') return false;
                if(c == ']' && st.top() != '[') return false;
            }
        }
        return st.empty();
    }
};

int  main() {
    Solution solution;
    string s = "{[()]}";
    bool result = solution.isValid(s);
    cout << "The string " << s << " is " << (result ? "valid" : "invalid") << endl;
    return 0;
}