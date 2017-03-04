class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size() < 2) return 0;
    
        int max = INT_MIN;
        int i=0, j=height.size()-1;
        while(i<j){
            int h = height[i]<height[j]?height[i]:height[j];
            int area = (j-i)*h;
            max = max>area?max:area;
            while(height[i]<=h && i<j){
                i++;
            } 
            while(height[j]<=h && i<j){
                j--;
            }
        }
        
        
        return max;
    }
};