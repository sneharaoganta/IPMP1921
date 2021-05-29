//https://www.hackerrank.com/challenges/maximum-perimeter-triangle/problem
vector<int> maximumPerimeterTriangle(vector<int> sticks) {
    
    sort(sticks.begin(),sticks.end(),greater<int>());
    int maxi=0;
    vector<int> result;
    vector<int> res(1,-1);
    
    for(int i=0;i<sticks.size()-2;i++){
        if(sticks[i]<sticks[i+1]+sticks[i+2]){
            maxi = max(maxi,sticks[i]+sticks[i+1]+sticks[i+2]);
            result.push_back(sticks[i]);
            result.push_back(sticks[i+1]);
            result.push_back(sticks[i+2]);
            break;
        }
    }
    
    if(maxi){
        sort(result.begin(),result.end());
        return result;
    }

   return res;
}