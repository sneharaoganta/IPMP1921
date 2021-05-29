//https://leetcode.com/problems/split-a-string-in-balanced-strings/
class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0 , splits = 0;
    for(char &c : s) {
        balance += (c == 'L' ? -1 : 1);
        if(balance == 0)
            splits++;
    }
    return splits;
    }
};