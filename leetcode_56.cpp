class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergeinter;
        if(intervals.size() == 0) return mergeinter;
        sort(intervals.begin(), intervals.end());
        vector<int> tempinterval = intervals[0];
        
        for(auto i : intervals){
            if(i[0] <= tempinterval[1]){
                tempinterval[1] = max(i[1], tempinterval[1]);
            }
            else{
                mergeinter.push_back(tempinterval);
                tempinterval = i;
            }
        }
        mergeinter.push_back(tempinterval);
        return mergeinter;
    }
};
