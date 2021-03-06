//https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/
class Solution {
public:
    int minOperations(string s) {
     char ch1 = '1';
        char ch2 = '0';
        int x = 0, y = 0;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] != ch1) ++x;
            if(s[i] != ch2) ++y;
            swap(ch1, ch2);
        }
        return min(x, y);   
    }
};