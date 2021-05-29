//https://leetcode.com/problems/maximum-units-on-a-truck/submissions/
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b){
            return a[1] > b[1];
        });
        int res = 0;
        for(vector<int>& box : boxTypes){
            while( box[0] && truckSize ){
                res += box[1];
                box[0]--, truckSize--;
            }
        } 
        return res;
    }
};