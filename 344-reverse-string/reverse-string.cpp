class Solution {
public:
    void reverseString(vector<char>& s) {
    int size = s.size();
    int start = 0;
    int end = size-1;
    char temp;
     while(start<=end){
        temp = s[start];
        s[start] = s[end];
        s[end]  = temp;
        start++;
        end--;
     }

    }
};