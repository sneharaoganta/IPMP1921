// 9.https://www.hackerrank.com/challenges/camelcase
// Status: All test cases accepted
// Code:
#include <bits/stdc++.h>
using namespace std;
// Complete the camelcase function below.
int camelcase(string s) {
int count =0;
int i;
for(i=0;i<s.length();i++){
if(isupper(s[i]))
count++;
}
return count+1;
}
