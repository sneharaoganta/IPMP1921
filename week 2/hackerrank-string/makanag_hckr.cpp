// Complete the makingAnagrams function below.
//3.https://www.hackerrank.com/challenges/making-anagrams/problem
  //Status:All test cases accepted

int makingAnagrams(string s1, string s2) {
    
    int a1[26]={0};
    int a2[26]={0};
    
    for(int i=0;i<s1.length();i++){
        int temp =s1[i]-97;
        a1[temp]++;
    }
    
    for(int i=0;i<s2.length();i++){
        int temp=s2[i]-97;
        a2[temp]++;
        
    }

int count =0;

for(int i=0;i<26;i++){
    int x=abs(a1[i]-a2[i]);
    count+=x;
}

return count;

}