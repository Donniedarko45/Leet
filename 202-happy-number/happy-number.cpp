class Solution {
public:
   bool calculateSquare(int n,unordered_set<int>&mp){
      int sum=0;
      int temp;
       if(n==1) return true;
      if(mp.count(n)) return false;
      mp.insert(n);
      while(n > 0){
        int temp = n % 10;
        sum +=temp*temp;
        n /= 10;
      }
      return calculateSquare(sum, mp);
   }

  
    bool isHappy(int n) {
     // bool ans = solve(n);
        //return ans;
          unordered_set<int>mp;
        bool ans=calculateSquare(n,mp);
        return ans;
    }
};