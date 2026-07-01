class Solution {
public:
    int characterReplacement(string s, int k) {
        int count[26] = {0};
        int l =0, maxLen = 0, maxFreq = 0;

        for(int r=0; r<s.size(); r++){
            count[s[r] - 'A']++;
            maxFreq = max(maxFreq, count[s[r] - 'A']);

            while((r-l+1) - maxFreq > k){
                count[s[l] - 'A']--;
                l++;
            }

            maxLen = max(maxLen, (r-l+1));
        }

        return maxLen;
    }
};
