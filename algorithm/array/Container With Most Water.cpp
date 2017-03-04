class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size() < 2) return 0;
    
        int max = INT_MIN;
        for(int i=0;i<height.size()-1;i++){
            for(int j=i+1;j<height.size();j++){
                int area = (j-i)*((height[i]<height[j])?height[i]:height[j]);
                max = (max>area)?max:area;
            }
        }
        
        return max;
    }
};