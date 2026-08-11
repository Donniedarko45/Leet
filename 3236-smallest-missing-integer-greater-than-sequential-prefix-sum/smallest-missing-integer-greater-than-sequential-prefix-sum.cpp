class Solution {
public:

    int check(vector<int>&nums,int sum){

        for(int i=0;i<nums.size();i++){
            if(sum==nums[i]){
              return check(nums,++sum);
            }
        }
        return sum;
    
    }

    int missingInteger(vector<int>& nums) {
            int sum=nums[0];
        for(int i=1;i<nums.size();i++){
    
            int chexk=nums[i-1]+1;
            if(nums[i]==chexk){
             
             sum=sum+nums[i];
            }else{
                break;
            }
        }

 cout<<sum;
        sort(nums.begin(),nums.end());
       int ans = check(nums,sum);
       cout<<ans;
    return ans;

    }
};