class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;

        for(int r=0; r<9; r++){
            for(int c=0; c<9; c++){
                int val = board[r][c];
                if(val == '.') continue;

                string row = "r" + to_string(r) + to_string(val);
                string col = "c" + to_string(c) + to_string(val);
                string box = "b" + to_string(r/3) + to_string(c/3) + to_string(val);

                if(seen.count(row) || seen.count(col) || seen.count(box)) 
                    return false;

                seen.insert(row);
                seen.insert(col);
                seen.insert(box);
            }
        }

        return true;
    }
};
