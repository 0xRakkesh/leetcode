class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end());
        int insert = false;
        for (int i = 0; i < intervals.size(); i++) {
            if (intervals[i][0] >= newInterval[0] && !insert) {
                res.push_back(newInterval);
                insert = true;
            }
            res.push_back(intervals[i]);
        }

        if (!insert) {
            res.push_back(newInterval);
        }

        vector<vector<int>> res1;
        int start1 = res[0][0];
        int end1 = res[0][1];
        for (int i = 1; i <= res.size() - 1; i++) {
            int start2 = res[i][0];
            int end2 = res[i][1];

            if (end1 >= start2) {
                start1 = start1;
                end1 = max(end1, end2);
                continue;
            }
            res1.push_back({start1, end1});
            start1 = start2;
            end1 = end2;
        }
        res1.push_back({start1, end1});
        return res1;
    }
};