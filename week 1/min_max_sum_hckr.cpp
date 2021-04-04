// 2.https://www.hackerrank.com/challenges/mini-max-sum
// Status:All test cases accepted
// Code:
#include <bits/stdc++.h>
using namespace std;
vector<string> split_string(string);
// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {
    
    vector<long> sum={0,0,0,0,0};
    int j=0;
    for(int i=0;i<arr.size();i++){
        for(j=0;j<arr.size();j++){
            if(j==i)
            continue;
            sum[i]+=arr[j];
        }
       
    }
   
    
   long max=sum[0];
   
   for(int i=0;i<sum.size();i++){
       if(sum[i]>max)
       max=sum[i];
   }
   
   long min = sum[0];
   
   for(int i=0;i<sum.size();i++){
       if(sum[i]<min)
       min=sum[i];
   }
   cout<<min<<"\t"<<max;
}
