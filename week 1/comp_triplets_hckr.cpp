// 3.https://www.hackerrank.com/challenges/compare-the-triplets
// Status: All test cases accepted
// Code:
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the compareTriplets function below.
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> q={0,0};
    
    for(int i=0;i<3;i++){
        
        if(a[i]>b[i])
        q[0]=q[0]+1;
        
        if(a[i]<b[i])
        q[1]=q[1]+1;
        
        
    }
  return q;
}


