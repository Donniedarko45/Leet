class Solution {
public:
    int isDivisible(int num,int t){
        int prod=1;
        int temp;
        int dummy=num;
        while(num>0){
              temp=num%10;
              prod=temp*prod;
              num=num/10;
        }
        cout<<num;
        if(prod%t==0) return dummy;
        else return isDivisible(dummy+1,t);
    }
    int smallestNumber(int n, int t) { 
       return isDivisible(n,t);        
    }
};