class Solution {
   public:
    vector<int> twoSum(vector<int>& n, int t) {
        unordered_map<int, int> seen;

        for(int i=0; i<n.size(); i++){

            int complement = t - n[i];

            if(seen.count(complement)){
                return {seen[complement], i};
            }

            seen[n[i]] = i;
        }

        return {};
    }
};
