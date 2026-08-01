#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isVowel(char ch){
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ; 
    }
    string reverseVowels(string s) {
        int n = s.size();
        int left = 0;
        int right = n - 1;

        while(left < right){
            while(left < right && !isVowel(s[left]))
                 left++;
            while(left < right && !isVowel(s[right]))
                 right--;

                 swap(s[left], s[right]);

                 left++;
                 right--;
        }
        return s;
    }
};

int main(){
    Solution sol;
    string s = "Lakshmi";
    string res = sol.reverseVowels(s);
    cout<<res<<endl;
    return 0;
}