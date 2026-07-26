class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int sum = 0;
        for (int i = 0; i <= (nums.size() - 1); i++) {
            sum = sum + nums[i];
        }
        int right = sum - left - nums[0];
        if (left == right) {
            return 0;
        }
        for (int i = 1; i <= (nums.size() - 1); i++) {
            left = left + nums[i - 1];
            right = sum - left - nums[i];
            if (left == right) {
                return i;
            }
        }
        return -1;
    }
};