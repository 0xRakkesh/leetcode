class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int high = 0, low = 0, sum = 0, minx = INT_MAX;
        for (high = 0; high < nums.size(); high++) {
            sum = sum + nums[high];
            while (sum >= target) {
                minx = min(minx, high - low + 1);
                sum -= nums[low];
                low++;
            }
        }
        return minx==INT_MAX?0:minx;
    }
};