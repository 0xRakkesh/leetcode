class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0;
        int high = 0;
        int sum = 0;
        int minl = INT_MAX;
        for ( high = 0; high < nums.size(); high++) {
            sum = sum + nums[high];
            while(sum >= target){
                minl = min(minl, high-low+1);
               sum = sum - nums[low];
              low++;
            }
        }
        return minl==INT_MAX?0:minl;
    }
};