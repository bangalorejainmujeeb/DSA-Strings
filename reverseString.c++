#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void reverse(string& s){
            int left = 0;
            int right = s.size()-1;
            while(left < right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
};

int main(){
    Solution sol;
    string s = "Mujeeb";
    sol.reverse(s);
    cout<<s<<endl;
    return 0;
}
