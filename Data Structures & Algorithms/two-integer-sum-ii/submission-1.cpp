class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        
        int l = 0;
        int r = n.size() - 1;

        while(l<r){
            int sum = n[l] + n[r];

            if(sum == t) return {l+1, r+1};
            else if(sum<t) l++;
            else r--;
        }

        return {};
    }
};
