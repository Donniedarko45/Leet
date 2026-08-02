class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp1;
        int n2=nums2.size();
        vector<int>ans;
        for(auto it:nums1){
            mp1[it]++;
        }
        
        for(int i=0;i<n2;i++){
            if(mp1[nums2[i]]){
                ans.push_back(nums2[i]);
                mp1.erase(nums2[i]);
            }
        }
        return ans;
    }
};