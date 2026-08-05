#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int lengthofLastWord(string s){
            int n = s.size();
            int cnt = 0;
            for(int i = n - 1; i >= 0; i--){
                if(s[i] == ' ' && cnt > 0){
                    return cnt;
                }
                if(s[i] != ' ') {
                    cnt++;
                }
            }
            return cnt;
        }
};

int main(){
    Solution sol;
    string s = "Mujeeb Lakshmi";
    int res = sol.lengthofLastWord(s);
    cout<<res<<endl;
    return 0;
}