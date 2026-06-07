class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        int longest = 0;

        for(int n: seen){

            if(!seen.count(n-1)){
                int len = 1;

                while(seen.count(n+1)){
                    n++;
                    len++;
                }
                longest = max(longest, len);
            }
        }
        return longest;
    }
};
