class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int n =nums.size();
        int m=floor(n/2);
        for(auto it:mp){
           if(it.second>m){
            return it.first;
           }
        }
        return -1;
    }
};