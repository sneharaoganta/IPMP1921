// 6.https://www.hackerrank.com/challenges/migratory-birds
// Status: one test case failed all other test cases successful(test case 2 failed)
// Code:
#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the migratoryBirds function below.
int migratoryBirds(vector<int> arr) {
    
    int max = *max_element(arr.begin(),arr.end());
    int min = *min_element(arr.begin(),arr.end());
    int range = max-min+1;
    
    vector<long> count(range);
    for(int i=0;arr[i];i++)
    ++count[arr[i]];

        
        long m = count[0];
        int r;
        
        for(int i=0;i<range;i++){
            if(count[i]>m){
            m=count[i];
            r=i;
            
            }
        }
        
        return r;
       }
