class Solution {
public:
    int countCommas(int n) {
       string s = to_string(n);
       int k=s.size();
       if(s.size()<4){
         return 0;
       }
       int ans=0;
        for(int i=1000;i<=n;i++){
          ans++;
        }
        return ans;
    }
};