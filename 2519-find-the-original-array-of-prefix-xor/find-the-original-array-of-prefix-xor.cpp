class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>ans;
        int n =pref.size();
        
        int totxorr=pref[0];
    ans.push_back(pref[0]);
        for(int i=1;i<n;i++){

           int missing=pref[i]^pref[i-1]; 
           ans.push_back(missing);
                     
        }
        return ans;
    }
};