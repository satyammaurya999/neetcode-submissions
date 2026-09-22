class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int n=nums.size();
        set<int>st(nums.begin(),nums.end());
        
        vector<int>v;
        for(auto n:st){
            v.push_back(n);
        }
        int cnt=1;
      for(int i = 0; i < v.size()-1; i++) {
          if(v[i+1] == v[i] + 1) {
        cnt++;
         }
         else{
            continue;
         }
       }

        return cnt;
        
    }
};
