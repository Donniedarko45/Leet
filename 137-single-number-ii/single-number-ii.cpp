class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>fr;
        for(auto it:nums){
            fr[it]++;
        }
        for(auto it:fr){
            if(it.second==1){
                return it.first;
            }
        }
        return 0;
    }
};