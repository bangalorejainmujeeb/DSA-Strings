#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    static bool cmp(string a, string b){
        return a + b > b + a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for(int num : nums){
            arr.push_back(to_string(num));
        }
        sort(arr.begin(), arr.end(), cmp);

        if(arr[0] == "0") return "0";

        string ans = "";
        for(string s : arr){
            ans += s;
        }
        return ans;
    }
    };

    int main(){
        Solution sol;
        vector<int> nums = {7, 39, 61, 24, 0, 33};
        string res = sol.largestNumber(nums);
        cout<<"Largest Number: "<<res<<endl;
        return 0;
    }