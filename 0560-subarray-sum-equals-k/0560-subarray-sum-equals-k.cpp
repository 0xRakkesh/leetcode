class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // intialize hashmap
        unordered_map<int, int> freq_map;
        int result = 0;
        int current_sum = 0;
        // seed the map
        freq_map[0] = 1;
        // interate through array
        for (int i = 0; i < nums.size(); i++) {
            current_sum = current_sum + nums[i];

            // calculate target
            int target = current_sum - k;
            //if we have target no before add it map
            if (freq_map.find(target) != freq_map.end()) {
                result += freq_map[target];
            }

            freq_map[current_sum]++;
        }
        return result;
    }
};