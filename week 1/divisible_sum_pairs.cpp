// 7.https://www.hackerrank.com/challenges/divisible-sum-pairs
// Status: all test cases accepted
// Code:
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the divisibleSumPairs function below.
int divisibleSumPairs(int n, int k, vector<int> ar) {
    
    int i,j;
    int count =0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((ar[i]+ar[j])%k == 0){
                count++;
            }
        }
    }
    
    return count;
}

