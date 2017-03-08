class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        if(numbers.size() < 1) return {};
        int i=0, j=numbers.size()-1;
        int sum;
        while(i<j){
            sum = numbers[i] + numbers[j];
            if(sum > target) {
                j--;
                continue;
            }
            if(sum < target) {
                i++;
                continue;
            }
            if(sum == target) {
                break;
            }
        }
        return vector<int> ({i+1,j+1});
        
    }
};