# include <iostream>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int min   = INT_MAX;
        int n     = nums.size();
        int sum   = 0;
        int count = 0;
        int l     = 0;
        int r     = 0;

        while (l < n) {
            if (sum >= target) {
                min  = std::min(min, count);
                sum -= nums[l++];
                count--;
            }
            else {
                if (r < n) {
                    sum += nums[r++];
                    count++;
                }
                else break;
            }
        }

        return (min == INT_MAX) ? 0 : min;
        
    }
};