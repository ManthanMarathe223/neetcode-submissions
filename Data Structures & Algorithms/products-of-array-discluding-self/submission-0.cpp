class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {

        int pro;
        vector<int> res;

        for(int i=0; i<n.size(); i++){
            pro = 1;

            for(int j=0; j<n.size(); j++){
                if(i != j) pro *= n[j];
            }

            res.push_back(pro);
        }

        return res;
    }
};
