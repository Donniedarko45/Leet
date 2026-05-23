class Solution {
public:
    bool check(vector<int>& nums) {
        bool ans = true;
        int n = nums.size();
        

        int leastIndex=0;
        // least element index find out krow
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                leastIndex = i+1;
            }
        }

        // finding the number sabse chota than index wai se start krenge
        for(int i = 0; i < n - 1; i++) {
            int curr = nums[(leastIndex + i) % n];
            int next = nums[(leastIndex + i + 1) % n];

            if(curr > next) return false;
        }
        return true;
    }
};