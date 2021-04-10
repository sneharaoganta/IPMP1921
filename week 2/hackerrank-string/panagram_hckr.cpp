// Complete the pangrams function below.
//7.https://www.hackerrank.com/challenges/pangrams/problem
  // Status:All test cases accepted

string pangrams(string s) {
    string ab;
    ab="abcdefghijklmnopqrstuvwxyz";
    transform(s.begin(), s.end(), s.begin(), ::tolower); 
    sort(s.begin(),s.end());
    int count=0,k=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==ab[k]){
            count++;
            k++;
            
        }
    }
    
    cout<<count;
    if(count>=26)
        return "pangram";
    return "not pangram";


}