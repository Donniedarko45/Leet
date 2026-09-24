class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
/*
        int n = nums.size();
        vector<int> ans;

        int positive = 0;
        int negative = 0;

        for (int k = 0; k < n / 2; k++) {
            while (nums[positive] < 0) {
                positive++;
            }

            ans.push_back(nums[positive]);
            positive++;

            while (nums[negative] > 0) {
                negative++;
            }
            ans.push_back(nums[negative]);
            negative++;
        }

        return ans;
        */


        // think of another Solution
    
         int n=nums.size();
         int k=0;
          int evenIndex=0;
          int oddIndex=1;
          vector<int>ans(n);
         for(int i=0;i<nums.size();i++){   
      // in ans even index starting 0 will always contains +ve number
      // in ans odd index starting 1 will always contains -ve number
            if(nums[i]>0){
                ans[evenIndex]=nums[i];
               evenIndex+=2;
            }else{
                ans[oddIndex]=nums[i];
                oddIndex+=2;
            }
         }
    return ans;

    }
};