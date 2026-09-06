/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        map<int,int>events;
        int n=intervals.size();
        for(auto &it:intervals){
            events[it.start]++;
            events[it.end]--;
        }
        int overlaps=0;
        int maxoverlaps=0;
        for(auto &it:events){
            overlaps+=it.second;
            if(overlaps>maxoverlaps){
                maxoverlaps=overlaps;
            }
        }
        return maxoverlaps;

        
    }
};
