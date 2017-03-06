class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> trangle(numRows, vector<int>{1}); //intial every first colume with 1
        for (int i = 1; i < numRows; i++) {
            trangle[i].resize(i+1, 1); // initial each row with 1, each row has i+1 elements 
            for(int j=1; j<i; j++){
                trangle[i][j] = trangle[i-1][j] + trangle[i-1][j-1];
            }
        }
        return trangle;
    }
};