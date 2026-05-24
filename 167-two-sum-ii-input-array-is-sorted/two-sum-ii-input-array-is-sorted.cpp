class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        /*for(int i=0;i<numbers.size();i++){
            for(int j=i+1;j<numbers.size();j++){
                if((numbers[i]+numbers[j])==target){
                    return {i+1,j+1};
                }
            }
        }
      return {0,0};
      */


      // two pointer..
      int n = numbers.size();
      int left =0;
      int right = n-1;
      // agar sum target se chota h toh aage left baddhai nai toh right badhao
      int sum =0;
      for(int i=0;i<n;i++){
         sum = numbers[left]+numbers[right];
         if(sum == target){
            return {left+1,right+1};
         }
         if(sum>target){
            right--;
         }else{
            left++;
         }
      }
      return {0,0};
      
    }
};