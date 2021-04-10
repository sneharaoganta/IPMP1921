// Complete the superReducedString function below.
//2.https://www.hackerrank.com/challenges/reduced-string/problem
  // Status:All test cases accepted

string superReducedString(string s) {
    
    int n;
    n=s.length();
 for(int i=0;i<n-1;i++){
     if(s[i]==s[i+1]){
         s.erase(i,2);
         i=-1;
     }
 }
 
 if(s.length()==0){
     s="Empty String";
     return s;
 }
 
 else
 return s;
}
