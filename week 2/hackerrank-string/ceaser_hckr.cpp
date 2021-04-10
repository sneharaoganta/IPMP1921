// Complete the caesarCipher function below.
//5.https://www.hackerrank.com/challenges/caesar-cipher-1/problem
   //Status: All test cases accepted

string caesarCipher(string s, int k) {
    

    char a;
    
    for(auto &c: s){
        if(isalpha(c)){
            a = isupper(c)?'A':'a';
            c= a + (c - a + k)%26;
        }
    }       
  return s;


}
