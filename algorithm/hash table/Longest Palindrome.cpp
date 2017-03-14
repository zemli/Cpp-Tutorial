class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> nums(128, 0);
        int pairs = 0;
        for (int i = 0; i < s.size(); i++) {
            if (nums[s[i]] == 1) pairs++;
            nums[s[i]] = 1 - nums[s[i]];
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) return 2 * pairs + 1;
        }
        return 2 * pairs;
    }
};