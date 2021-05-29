//https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/problem
int minimumAbsoluteDifference(vector<int> arr) {
    
    int i;
    int min;
    int n = arr.size();
    int k=0;
    int l = (pow(n,2)-n)/2;
    vector <int> temp(l,0);
    for(i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            temp[k]=abs(arr[i]-arr[j]);
            
            k++;
            
        }
        
    }
    
    sort(temp.begin(),temp.end());
   
    min = temp[0];
    
    return min;

}