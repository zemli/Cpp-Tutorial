class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex == 0) return vector<int>({1});
        vector<int> row (rowIndex+1,0); //rowIndex+1 inits with value 0
        row[0] = 1;
        for (int i = 1; i < rowIndex+1; i++) {
        	for (int j = i; j >= 1; j--) {
        		row[j] += row[j-1];
        	}
        }
        return row;
    }

};