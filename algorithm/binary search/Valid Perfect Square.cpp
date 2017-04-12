class Solution {
public:
    bool isPerfectSquare(int num) { //time complexity is O(log(n))
        int begin = 1, end = num;
        
        while(end >= begin){ //note the boundary 
            long mid = (begin + end) / 2; // if mid is int, MAX_INT + 1 will make it out of range
            long temp = mid*mid; //both variable need to be long for product result. eg. test case "2147395600". 
            			//if mid is int, must cast the result before = symblo by adding (long)
            if(temp == num) return true;
            else if(temp > num) end = (int) mid-1; //note the boundary 
            else if(temp < num) begin = (int) mid+1; // so that end could equal to begin, and every value would be missed
        }
        return false;
    }
};

