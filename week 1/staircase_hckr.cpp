// 13.https://www.hackerrank.com/challenges/staircase
// Status:All test cases accepted
// Code:
#include <bits/stdc++.h>
using namespace std;
// Complete the staircase function below.
void staircase(int n) {
int i,j;
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
if(i+j<=n)
cout<<' ';
if(i+j>n)
cout<<'#';
}
cout<<'\n';
}
}