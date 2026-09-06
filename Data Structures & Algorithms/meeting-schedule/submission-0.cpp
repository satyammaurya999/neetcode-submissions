class Solution {
    static bool cmp(const Interval &a, const Interval &b){
        return a.end < b.end;
    }

public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        int n = intervals.size();

        if(n <= 1) return true;

        sort(intervals.begin(), intervals.end(), cmp);

        int last = intervals[0].end;

        for(int i = 1; i < n; i++){
            if(intervals[i].start < last){
                return false;
            }
            last = intervals[i].end;
        }

        return true;
    }
};