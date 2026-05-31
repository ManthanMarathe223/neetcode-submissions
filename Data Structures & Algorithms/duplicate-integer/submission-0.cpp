class Solution {
public:
    bool hasDuplicate(vector<int>& n) {
        
        vector<int> tmp;

        for(int i=0; i<n.size(); i++){

            if(find(tmp.begin(), tmp.end(), n[i]) != tmp.end()){
                return true;
            }

            tmp.push_back(n[i]);
        }

        return false;
    }
};