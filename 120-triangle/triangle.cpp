class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int sum = triangle[0][0];
        int index = 0;  
/*
        for (int i = 1; i < triangle.size(); i++) {
    
            if (index == triangle[i].size() - 1) {
                sum += triangle[i][index];
            }
            else {
        
                if (triangle[i][index] <= triangle[i][index + 1]) {
                    sum += triangle[i][index];
                } else {
                    index = index + 1;
                    sum += triangle[i][index];
                }
            }
        }

        return sum;

        */
        int n = triangle.size();
        
        vector<int> laastElem= triangle[n-1];
        int sizeofNext = laastElem.size();
        vector<int>dp=triangle.back();
  
        for(int j= triangle.size()-2;j>=0;j--){
            for(int i=0;i<triangle[j].size();i++){
                dp[i]= triangle[j][i] + min(dp[i],dp[i+1]); 
            }
        }
        return dp[0];
       
    }
};