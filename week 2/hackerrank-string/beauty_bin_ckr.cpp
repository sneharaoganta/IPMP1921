// Complete the beautifulBinaryString function below.
//10.https://www.hackerrank.com/challenges/beautiful-binary-string/copy-from/208511801
   // Status:5 test cases not accepted

int beautifulBinaryString(string b) {
    int count =0;
    int flag=0;
    for(int i=1;i<b.size();i++){
        if(b[i]=='1'){
            if(b[i-1]=='0'&&b[i+1]=='0'){
                count++;
                if(b[i+2]=='0'&&b[i+3]=='1'&&b[i+4]==0){
                    flag =1;
                }
            }
        }
    }
    
    
    
    cout<<b<<"\n";
    
    if(flag==1){
        return count;
    }
    
    if(count==0){
        return 0;
    }

   else
    return count-1;

}
