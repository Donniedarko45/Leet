class Solution {
public:
    bool canJump(vector<int>& nums) {
       int n=nums.size();
       if(n==1) return true;
       int maxPos=nums[0];
       for(int i=0;i<n;i++){
        if(i>maxPos) return false;
        if(maxPos<(i+nums[i])){
            maxPos=i+nums[i];
        }
       }
       if(maxPos>=n-1) return true;
       return false; 
    }
};