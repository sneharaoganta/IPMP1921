// 10.https://www.hackerrank.com/challenges/crush
// Status: time limit exceeded for few test cases , all other test cases code successCode:
#include <bits/stdc++.h>
using namespace std;
vector<string> split_string(string);
// Complete the arrayManipulation function below.
long arrayManipulation(int n, vector<vector<int>> queries) {
vector<long> a(n,0);
long max = a[0];
for(int i =0; i< queries.size();i++){
for(int j=queries[i][0]-1;j<queries[i][1];j++){
a[j]+=queries[i][2];
}
}
for(int i= 0;i<n;i++){
if(a[i]>max)
max=a[i];
}
return max;
}
