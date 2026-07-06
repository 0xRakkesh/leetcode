class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int c = 0;
        int bc = 0;
        int sum = 0;
        int ans = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            c = nums[i];
            sum = bc + nums[i];
            bc = max(sum, c);
            ans = max(ans, bc);
        }
        return ans==INT_MIN?bc:ans;
    }
};