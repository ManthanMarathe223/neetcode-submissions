class TimeMap {
        unordered_map<string, vector<pair<int, string>>> map;
public:
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        map[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        vector<pair<int, string>>& vals = map[key];
        int l = 0, r = vals.size()-1;
        string result = "";

        while(l<=r){
            int mid = (l+r)/2;

            if(vals[mid].first <= timestamp){
                result = vals[mid].second;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }

        return result;
    }
};
