class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left =0;
        int right = n-1;
        while(left<right){
            nums[left]= nums[left]*nums[left];
            nums[right]= nums[right]*nums[right];
            left++;
            right--;
        }
        // middle element ke liye
        if(n%2!=0){
      int middle = n/2; 
        nums[middle]=nums[middle]*nums[middle]; 
        }
  
        sort(nums.begin(),nums.end());
        return nums;
    }
};