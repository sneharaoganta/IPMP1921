// 15.https://www.hackerrank.com/challenges/the-hurdle-race
// Status:All test cases accepted
// Code:
#include <bits/stdc++.h>
using namespace std;
vector<string> split_string(string);
// Complete the hurdleRace function below.
int hurdleRace(int k, vector<int> height) {
int max = height[0];
int count=0;
for(int i=0;i<height.size();i++){
if(height[i]>max)
max=height[i];
}
int n = abs(max-k);
int p = k+n;
for(int i=0;i<height.size();i++){
if(k>=height[i])count=0;
else if(k<height[i]){
count =n;
break;
}
}
return count;
}