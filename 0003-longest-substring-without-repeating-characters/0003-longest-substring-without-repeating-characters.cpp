class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0, high = 0, res = 0;
        unordered_map<char, int> map;
        for (high = 0; high < s.size(); high++) {
            map[s[high]]++;
            while (map[s[high]] > 1) {
                map[s[low]]--;
                if (map[s[low]] == 0) {
                    map.erase(s[low]); 
                }
                low++;
            }
            res = max(res, high - low + 1);
        }
        return res;
    }
};