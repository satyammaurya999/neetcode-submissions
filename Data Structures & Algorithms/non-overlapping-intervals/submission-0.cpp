class Solution {
    static bool cmp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int cnt=1;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),cmp);
        int last=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]>=last){
                cnt++;
                last=intervals[i][1];
            }
        }
        return n-cnt;
       

        
    }
};
