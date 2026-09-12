class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> freq(10);
        int totZero = 0;
        int totalEvenDistinct = 0;
        for (int d : digits) {
            freq[d]++;
        }

        for (int d = 0; d <= 8; d += 2) {
            if (freq[d] > 0) {
                totalEvenDistinct++;
            }
        }
        int ans = 0;
        for (int last = 0; last <= 8; last += 2) {
            if (freq[last] == 0)    continue;
            freq[last]--;
            int firstChoices = 0;
            for (int d = 1; d <= 9; d++) {
                if (freq[d] > 0) firstChoices++;
            }

            for (int first = 1; first <= 9; first++) {
                if (freq[first] == 0)
                    continue;
                freq[first]--;
                int middleChoices = 0;
                for (int d = 0; d <= 9; d++) {
                    if (freq[d] > 0)
                        middleChoices++;
                }
                ans += middleChoices;
                freq[first]++;
            }
            freq[last]++;
        }
        return ans;
    }
};