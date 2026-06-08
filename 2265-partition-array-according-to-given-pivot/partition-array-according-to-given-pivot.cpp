class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int>ans(n);
        int idx=0;
        int cntNoofPivot=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                ans[idx]=nums[i];
                idx++;
            }
            if(nums[i]==pivot){
               cntNoofPivot++; 
            }
        }
        for(int i=0;i<cntNoofPivot;i++){
        ans[idx]=pivot;
        idx++;
        }

        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot){
                ans[idx]=nums[i];
                idx++;
            }
        }
        return ans;
    }
};

// [9,12,5,10,14,3,10]
// 9 pe h toh chota hai toh ussi pe rho
// 12 bada h toh swap kr do i+1 se 9,5,12,10,14,3,10 aur i-- kr do
