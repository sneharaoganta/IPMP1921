// 12. https://www.hackerrank.com/challenges/diagonal-difference
// Status: All test cases accepted
// Code:
int diagonalDifference(vector<vector<int>> arr) {
int i,j;
int sump=0;
int sums=0;int final =0;
for(i=0;i<arr.size();i++){
for(j=0;j<arr.size();j++){
if(i==j)
sump+=arr[i][j];
}
}
int n= arr.size();
for(i=0;i<arr.size();i++){
for(j=0;j<arr.size();j++){
if(i+j==n-1)
sums+=arr[i][j];
}
}
final = abs(sump-sums);
return final;
}
