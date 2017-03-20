class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int r = grid.size(); 
        int l = grid[0].size();
        int sum = 0;

        for(int i=0; i<l; i++){
            for(int j=0; j<r; j++){
                if(grid[i][j] == 1) {
                    sum += cellPrimeter(grid, i, j);
                }
            }
        }
        
        return sum;
    }
private:
    int cellPrimeter(const vector<vector<int>>& grid, int i, int j){
        int r = grid.size();
        int l = grid[0].size();

        int count = 0;
        
        if(i-1 >=0) if(grid[i-1][j] == 1) count++;
        if(j-1 >=0) if(grid[i][j-1] == 1) count++;
        if(j+1 < l) if(grid[i][j+1] == 1) count++;
        if(i+1 < r) if(grid[i+1][j]== 1) count++;
        return 4 - count;
    }
};