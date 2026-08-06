#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isAnagram(string s, string t) {
     int l1 = s.size();
     int l2 = t.size();
     map<char, int> cnt;

     if(l1 != l2) return false;
     for(char c : s){
        cnt[c]++;
     }  
     for(char c : t){
        cnt[c]--;
        if(cnt[c] < 0) return false;
     } 
     return true;
    }
};

int main(){
    Solution sol;
    string s = "lakshmi";
    string t = "imhskal";
    bool res = sol.isAnagram(s, t);
    cout<<"Anagram"<<endl;
}