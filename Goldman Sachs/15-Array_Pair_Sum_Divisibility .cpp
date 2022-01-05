#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        
        int dp[k];
        for(int a : nums){
            int rmd = a % k;
            if(rmd < 0) rmd += k;
            dp[rmd]++;
        }
        
        for(int i =1 ; i < k ; i++){
            if(dp[i] != dp[k-i])
                return false;
        }
        
        return dp[0]%2 == 0;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  