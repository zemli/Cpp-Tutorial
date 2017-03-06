class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex == 0) return vector<int>({1});
        vector<int> row (rowIndex+1,1); //rowIndex+1 inits with value 1
        for (int i = 0; i < rowIndex; i++) {
            for (int j = i; j > 0; j--) {
                row[j] += row[j-1];
            }
        }
        return row;
    }

};