class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
      
      bool nonzero=false;
     int xorr=0;
      int n=nums.size();
      for(int i=0;i<n;i++){
       xorr^=nums[i];
       if(nums[i]!=0){
        nonzero=true;
       }
      }
      if(nonzero==false){
        return 0;
      }
      if(xorr!=0) return n;
      if(nonzero==true) return n-1;
      return 0;
    }
};