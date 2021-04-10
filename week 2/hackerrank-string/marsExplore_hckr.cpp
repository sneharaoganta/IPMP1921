// Complete the marsExploration function below.
//6.https://www.hackerrank.com/challenges/mars-exploration/problem
  // Status:All test cases accepted

int marsExploration(string s) {
    
    int C=0;
    
    for(int i=0;i<s.length();i=i+3)
    {
        if(s[i]!='S')
            C++;
        if(s[i+1]!='O')
            C++;
        if(s[i+2]!='S')
            C++;
    
    }
    
    return C;


}