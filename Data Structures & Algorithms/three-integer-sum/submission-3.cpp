class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        sort(n.begin(), n.end());
        vector<vector<int>> result;

        for(int i=0; i<n.size(); i++){

            if(i>0 && n[i] == n[i-1]) continue;

            int l = i+1;
            int r = n.size()-1;

            while(l<r){

                int sum = n[i] + n[l] + n[r];

                if(sum < 0) l++;
                else if(sum > 0) r--;
                else{
                    result.push_back({n[i], n[l], n[r]});
                    l++;
                    while(l<r && n[l] == n[l-1]) l++;
                }
            }
        }

        return result;
    }
};
