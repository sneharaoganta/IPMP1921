//https:leetcode.com/problems/different-ways-to-add-parentheses/submissions/
class Solution {
public:
    
     vector<int> search(string expression){
        vector<int> res;
        vector<int> left;
        vector<int> right;
        
        if (expression.find('+')==-1 &&expression.find('-')==-1 && expression.find('*')==-1){
            int tmp;
            stringstream(expression) >> tmp;
            res.push_back(tmp);
        }else{
            for (int i=1; i<expression.size(); i++){
                if (expression[i] == '+' || expression[i] == '-' ||expression[i] == '*'){
                    left = search(expression.substr(0,i));
                    right = search(expression.substr(i+1));
                    for (int j=0;j<left.size();j++){
                        for (int k=0;k<right.size();k++){
                            int val = 0;
                            if (expression[i] == '+') {val = left[j]+right[k];}
                            if (expression[i] == '-') {val = left[j]-right[k];}
                            if (expression[i] == '*') {val = left[j]*right[k];}
                            res.push_back(val);
                        }
                    }
                }
            }
        }
        return res;
    }
    
    vector<int> diffWaysToCompute(string expression) {
         vector<int> result;
        if (expression.size() == 0){ return result; }
        return search(expression);
    }
};