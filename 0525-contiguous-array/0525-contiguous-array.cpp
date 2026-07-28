class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> diff_map;
        int zero_count = 0;
        int one_count = 0;
        int max_len = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zero_count++;
            } else {
                one_count++;
            }

            int diff = one_count - zero_count;

            if (diff == 0) {
                max_len = max(max_len, i + 1);
                continue;
            }

            if (diff_map.find(diff) == diff_map.end()) {
                diff_map[diff] = i;
            }

            else {
                int length = i - diff_map[diff];
                max_len = std::max(max_len, length);
            }
        }

        return max_len;
    }
};