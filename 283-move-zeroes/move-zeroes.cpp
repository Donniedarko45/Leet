class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int ft=0;
    int pt=0;
    int n=nums.size();
    
    while(ft<n && pt <n){
      // ft ko zero pe lao and pt ko next non-zero element pe
      if(nums[ft]!=0){
        ft++;
        pt=max(ft,pt);
        continue;
      }
      // pt ko non-zero element pe.. idhar tb jayega jab mil gya
      if(pt<=ft){
        pt=ft+1;
      }
      while(pt<n && nums[pt]==0){
        pt++;
      }
         if(pt==n) break;
     swap(nums[ft],nums[pt]);
   

    }

    }
};