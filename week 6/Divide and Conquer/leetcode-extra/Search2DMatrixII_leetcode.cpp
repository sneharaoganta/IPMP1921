//https://leetcode.com/problems/search-a-2d-matrix-ii/submissions/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int nRow = matrix.size();
        if (nRow == 0) {return false;}
        int nCol = matrix[0].size();
        if (nCol == 0) {return false;}
        int i = 0; 
        int j = nCol - 1;
        
        while (i < nRow && j >=0){
            if (matrix[i][j] < target){
                i++;
            }else if (matrix[i][j] > target){
                j--;
            }else{
                return true;
            }
        }
        return false;
    }
};