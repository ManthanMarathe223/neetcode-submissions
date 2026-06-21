class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> res;
        int cnt = 0;

        for(int i=0; i<t.size(); i++){
            cnt = 0;
            int j;
            for(j=i+1; j<t.size(); j++){
                cnt++;
                if(t[i]<t[j]){
                    break;
                }
            }
            
            if(j == t.size()){
                res.push_back(0);
            }
            else{
                res.push_back(cnt);
            }
        }
        return res;
    }
};
