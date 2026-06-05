class Solution {
public:
    vector<int> topKFrequent(vector<int>& n, int k) {
        unordered_map<int,int> freq;

        for(int nums: n) freq[nums]++;

        vector<pair<int,int>> pairs(freq.begin(), freq.end());

        sort(pairs.begin(), pairs.end(), [](auto& a, auto& b){
            return a.second > b.second;
        });

        vector<int> result;

        for(int i=0; i<k; i++){
            result.push_back(pairs[i].first);
        }

        return result;
    }
};
