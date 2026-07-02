class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0, high = 0, res = 0;
        unordered_map<int, int> map;
        for (high = 0; high < fruits.size(); high++) {
            map[fruits[high]]++;
            while (map.size() > 2) {
                map[fruits[low]]--;
                if (map[fruits[low]] == 0) {
                    map.erase(fruits[low]);
                }
                low++;
            }
            if(map.size()<=2){
                res = max(res,high-low+1);
            }
        }
        return res;
    }
};