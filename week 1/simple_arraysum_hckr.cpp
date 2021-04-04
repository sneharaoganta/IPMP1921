// 5.https://www.hackerrank.com/challenges/simple-array-sum
// Status: All test cases accepted
// Code:
#include <bits/stdc++.h>
using namespace std;
vector<string> split_string(string);
/*
 * Complete the simpleArraySum function below.
 */
int simpleArraySum(vector<int> ar) {
    /*
     * Write your code here.
     */int sum=0;
     for(int i=0;i<ar.size();i++){
        sum+=ar[i] ;
     }
return sum;
}
