#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string &s) {
        int l = s.size();
        string ans = "";
        reverse(s.begin(), s.end());

        for(int i = 0; i < l; i++){
            string word = "";
            while(i < l && s[i] != ' '){
                word += s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.length() > 0){
               ans += " "+ word;
            } 
        }
        return ans.substr(1);
    }
};

int main() {
    Solution sol;
    string s = "Mujeeb is a Good Boy";
    sol.reverseWords(s);
    cout<< s << endl;
    return 0;
}