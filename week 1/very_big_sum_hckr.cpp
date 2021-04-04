// 1.https://www.hackerrank.com/challenges/a-very-big-sum
// Status: All test cases accepted
// Code:
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the aVeryBigSum function below.
long aVeryBigSum(vector<long> ar) {
    
    long sum =0;
    for(int i=0;i<ar.size();i++){
        sum+=ar[i];
    }

   return sum;

}

