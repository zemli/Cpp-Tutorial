class Solution {
public:
    string countAndSay(int n) {
        vector<int> vec = reverse(n);
        stringstream ss;
        int count = 0, digit = vec.back();
        
        while(!vec.empty()){
            if(digit == vec.back()){
                count++;
            }
            else{
                ss << count << digit;
                count = 1;
                digit = vec.back();
            }
            vec.pop_back();
        }
        ss << digit << count;
        return ss.str();
    }
private:
    vector<int> reverse(int n){
        vector<int> vec;
        int digit;

        while(n/10>0){
            digit = n%10;
            vec.push_back(digit);
            n = n/10;
        }
        vec.push_back(n);
        return vec;
    }
};