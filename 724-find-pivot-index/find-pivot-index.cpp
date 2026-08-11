class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
           int left=accumulate(nums.begin(),nums.begin()+i,0);
           int right=accumulate(nums.begin()+i+1,nums.end(),0);
           if(left==right){
            return i;
           }
        }
        return -1;
    }
};