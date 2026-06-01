class Solution {
public:
    bool hasDuplicate(vector<int>& n) {
        unordered_set<int> seen;

        for(int x: n){
            if(seen.count(x)) return true;
            seen.insert(x);
        }

        return false;
    }
};