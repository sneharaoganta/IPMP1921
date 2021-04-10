// Complete the reverseArray function below.
vector<int> reverseArray(vector<int> a) {
    vector<int> b(a.size(),0);
    int j=a.size()-1;
    for(int i=0;i<a.size();i++){
        b[j]=a[i];
        j--;
       }
    
    
    return b;

}