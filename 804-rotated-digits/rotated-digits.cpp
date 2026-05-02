class Solution {
public:
    bool isGoodNumber(int i){
       long long count=0;
       long long size=0;
       while(i>0){
       if(i%10==3 || i%10==4 || i%10==7) return false;
       if(i%10==0 ||i%10==1 ||i%10==8) count ++;
        size++;
        i=i/10;
       }
       if(count==size) return false;
       return true;

     }
    int rotatedDigits(int n) {   
        int res=0;
        for(int i=1;i<=n;i++){
            if (isGoodNumber(i)){
                res++;
            }
        }
        return res;
    }
};