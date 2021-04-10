// Complete the kangaroo function below.
1.https://www.hackerrank.com/challenges/kangaroo/problem
  Status:Some test cases not accepted

string kangaroo(int x1, int v1, int x2, int v2) {
    
    string result;
    
    // if(v1)
    
    if(x1+v1==x2+v2){
     result = "YES";   
    }
    
    if(x2>x1&&v2>v1){
        result="NO";
    }
    
    if(x2>x1&&v2<v1){
       result ="YES";
    }
    
    
    // else if(x2>x1&&v2>v1){
    //     result ="NO";
    // }
    // if(x2<x1&&v2<v1){
    //     result="NO";
    // }
    
    // if(x1<x2&&v1>v2){
    //     result="NO";
    // }
    
    // if(x2<x1&&v1<v2){
    //     result="YES";
    // }
    cout<<result;
    
        return result;
}
