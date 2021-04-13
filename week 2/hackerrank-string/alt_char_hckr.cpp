// Complete the alternatingCharacters function below.
//9.https://www.hackerrank.com/challenges/alternating-characters/problem
//Status:All test cases accepted

int alternatingCharacters(string s) {
    int i;
    int count=0;
    label:
    for(i=0;i<s.size()+1;i++){
        if(s[i]=='A'&&s[i+1]=='A'||s[i]=='B'&&s[i+1]=='B'){
            s.erase(s.begin()+i);
            i=i-1;
            count++;
        }
}
    cout<<s<<"\n";
    
    return count;
}