//https://leetcode.com/problems/assign-cookies/
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
         sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int numberOfChildren = g.size(), numberOfCookies = s.size();
    int cookie = 0, answer = 0;
    for(int i=0;i<numberOfChildren && cookie<numberOfCookies;){
        if(s[cookie] >= g[i]){
            i++;
            answer++;
        }
        cookie++;
    }
    return answer;
    }
};