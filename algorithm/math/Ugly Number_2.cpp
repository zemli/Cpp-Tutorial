class Solution {
public:
    bool isUgly(int num) {
        if(num < 1) return false;
        for(int i=6; i>=2 && num>1; i--){ //find prime factors firstly //chack num>1
            while(num%i == 0)
                num /= i;
        }
        return num == 1;//concise
    }
};