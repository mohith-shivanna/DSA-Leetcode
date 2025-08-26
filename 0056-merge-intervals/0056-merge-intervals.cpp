class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
          sort(intervals.begin(), intervals.end());

        vector<vector<int>> result;

       
        for (int i = 0; i < intervals.size(); i++) {
            int start = intervals[i][0];
            int end   = intervals[i][1];

           
            if (result.size() == 0 || result[result.size()-1][1] < start) {
                vector<int> newInterval;
                newInterval.push_back(start);
                newInterval.push_back(end);
                result.push_back(newInterval);
            }
            else {
                
                if (end > result[result.size()-1][1]) {
                    result[result.size()-1][1] = end;
                }
            }
        }
        return result;
        
    }
};