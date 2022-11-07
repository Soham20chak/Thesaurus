class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<int>s;
        s.push_back(intervals[0][0]);
        s.push_back(intervals[0][1]);
        vector<vector<int>>ans;
        ans.push_back(s);
        for(int i=0;i<intervals.size();i++){
            if(s[1]>=intervals[i][0]){
                int maxi=max(s[1],intervals[i][1]);
                ans.pop_back();
                s[1]=maxi;
                ans.push_back(s);
            }
            else{
                s[0]=intervals[i][0];
                s[1]=intervals[i][1];
                ans.push_back(s);
            }
        }
        return ans;
        
    }
};
