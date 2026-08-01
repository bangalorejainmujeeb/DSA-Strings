#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
       void ReverseString(string &s, int left, int right){
        while(left < right){
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
    string reverse(string s, int k){
        int n = s.size();
        for(int i = 0; i < n; i += 2 * k){
            int left = i;
            int right = min(i + k - 1, n - 1);
            ReverseString(s, left, right);
        }
        return s;
    }
};

int main(){
    Solution sol;
    string s = "Mujeeb";
    int k = 2;
    string result = sol.reverse(s, k);
    cout << result << endl;
    return 0;
}

