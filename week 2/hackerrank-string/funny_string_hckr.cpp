// Complete the funnyString function below.
//8.https://www.hackerrank.com/challenges/funny-string/problem
   //Status:All test cases accepted

string funnyString(string s) {
    bool outp = true; 
    string p;  
for (int i=1, j=s.length()-2; i<s.length(), j>=0; i++, j--) {

    if ( abs(s[i]-s[i-1]) != abs(s[j]-s[j+1]) ) {
        outp = false;
    }       
}
if(outp==true){
    p= "Funny";
} 

else if(outp==false){
    p= "Not Funny";
}

return p;
}
