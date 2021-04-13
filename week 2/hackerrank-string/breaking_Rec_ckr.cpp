// Complete the breakingRecords function below.
vector<int> breakingRecords(vector<int> scores) {
    
    int i;
    int crec=0;
    int low=0;
    vector<int> result(2.0);
    h
     vector<int> max(scores.size(),0);
     vector<int> min(scores.size(),0);
     for(i=0;i<scores.size();i++){
         if(i==0){
             max[i]=scores[i];
             min[i]=scores[i];
         }
         else{
             if(scores[i+1]>max[i]){
                 max[i+1]=scores[i+1];
                 crec++;
             }
             
             if(scores[i+1]<min[i]){
                 min[i+1]=scores[i+1];
                 low++;
             }
         }
     }
     
     
    result[0]=crec;
    result[1]=low;
    
    return result;
     
    
}