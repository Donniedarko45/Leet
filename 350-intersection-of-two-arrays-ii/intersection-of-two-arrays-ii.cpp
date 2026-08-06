class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        
        for(int i=0;i<nums2.size();i++){
            mp2[nums2[i]]++;
        }
        vector<int>ans;
         for(int i=0;i<nums1.size();i++){
            if(mp2[nums1[i]]>0){
                ans.push_back(nums1[i]);
                mp2[nums1[i]]--;
            }
         }
         return ans;
    }
};