class Solution {
public:

    string encode(vector<string>& strs) {
        string result;

        for(string s: strs){
            result += to_string(s.size()) + "#" + s;
        }

        return result;
    }

    vector<string> decode(string s) {
        
        int i = 0;
        vector<string> res;

        while(i<s.size()){

            int j = i;

            while(s[j] != '#') j++;

            int len = stoi(s.substr(i, j-i));
            string str = s.substr(j+1,len);
            res.push_back(str);

            i = j + 1 + len;
        }

        return res;
    }
};
