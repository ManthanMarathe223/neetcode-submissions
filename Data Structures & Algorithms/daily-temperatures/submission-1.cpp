class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> res(t.size(), 0);
        stack<pair<int,int>> st; // {temperature, index}

        for(int i = 0; i < t.size(); i++){
            while(!st.empty() && t[i] > st.top().first){
                int idx = st.top().second;
                res[idx] = i - idx;
                st.pop();
            }
            st.push({t[i], i});
        }
        return res;
    }
};