class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>max;
        vector<int>minii(n);

        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
            max.push_back(maxi);
        } 
        /*  
        //mini fill o(n*n)
        for(int i=0;i<nums.size();i++){
          for(int j=i;j<nums.size();j++){
            if(nums[j]<mini){
                mini=nums[j];
                
            }
          }
          min.push_back(mini);
          mini=INT_MAX; 
        }
        */
         minii[n-1]=nums[n-1];
         for(int i=n-2;i>=0;i--){
            minii[i]=min(minii[i+1],nums[i]);
         }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if((max[i]-minii[i])<=k){
                return i;
            }
        } 
        return -1;
    }
};