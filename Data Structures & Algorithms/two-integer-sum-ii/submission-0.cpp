class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        
        for(int i=0; i<(n.size()-1); i++){
            for(int j=i+1; j<n.size(); j++){

                if(n[i] + n[j] == t){
                    return {i+1, j+1};
                }
            }
        }

        return {-1, -1};
    }
};
