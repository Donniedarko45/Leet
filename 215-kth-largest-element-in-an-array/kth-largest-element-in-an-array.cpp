class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>str;
        int n=nums.size();
        for(int i=0;i<n;i++){
            str.push(nums[i]);
            if(str.size()>k){
                str.pop();
            }
        }
        return str.top();
    }
};