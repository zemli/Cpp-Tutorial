class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size() < 2) return 0;
    
        int max = INT_MIN;
        for(int i=0;i<height.size();i++){
            for(int j=0;j<height.size();j++){
               if(height[j]>=height[i]){
                   int area = abs(j,i)*height[i];
                   max = (max>area)?max:area;
               }
            }
        }
        return max;
    }
    int abs(int a, int b){
        if(a>b) return a-b;
        if(a<=b) return b-a;
    }
};