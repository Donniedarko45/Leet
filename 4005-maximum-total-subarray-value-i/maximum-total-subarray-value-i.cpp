class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();
        long long sum = 0;
        
        // vector<int>res(n);
    
           
                int maxi= *max_element(nums.begin(), nums.end()); 
               int mini=*min_element(nums.begin(), nums.end());

        //   int sum =accumulate(res.begin(), res.end(), 0);
        return 1LL*(maxi-mini)*k;
    }
};