class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int left=0;
        int pair=0;
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        for(auto e:freq){
            pair= pair+ e.second/2;
            left= left+ e.second%2;
        }
        return{pair,left};
    }
};