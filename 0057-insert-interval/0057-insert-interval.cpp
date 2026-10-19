class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int n=intervals.size();
        for(int i=0;i<n-1;i++){
            if(intervals[i][1]>=intervals[i+1][0]){
                intervals[i+1][1]=max(intervals[i+1][1],intervals[i][1]);
                intervals[i+1][0]=min(intervals[i+1][0],intervals[i][0]);
                // ans.push_back({min(intervals[i+1][0],intervals[i][0]),max(intervals[i+1][1],intervals[i][1])})
            }
            else{
                ans.push_back({intervals[i][0],intervals[i][1]});
            }
        }
        ans.push_back({intervals[n-1][0],intervals[n-1][1]});
        return ans;
    }
};