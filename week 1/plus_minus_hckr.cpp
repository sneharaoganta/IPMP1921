// 4.https://www.hackerrank.com/challenges/plus-minus
// Status:All test cases accepted
// Code:
#include <bits/stdc++.h>
using namespace std;
vector<string> split_string(string);

// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
    float p=0;
    float n=0;
    float z=0;
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]>0)
        p++;
        if(arr[i]<0)
        n++;
        if(arr[i]==0)
        z++;
    }
    
    cout<<std::fixed;
    cout<<std::setprecision(6);
    cout<<p/arr.size()<<"\n"<<n/arr.size()<<"\n"<<z/arr.size()<<"\n";
}
