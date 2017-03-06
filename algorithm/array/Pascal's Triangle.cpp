class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    	vector<vector<int>> trangle(numRows, vector<int>());
    	for (int i = 0; i < numRows; i++) {
    		trangle[i].resize(i+1);
    		trangle[i][0] = trangle[i][i] = 1;
    		for (int j = 1; j < i; j++) {
    			trangle[i][j] = trangle[i-1][j-1] + trangle[i-1][j];
    		}
    	}
        return trangle;
    }
};