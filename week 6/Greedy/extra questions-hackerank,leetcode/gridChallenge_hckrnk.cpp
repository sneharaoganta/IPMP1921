//https://www.hackerrank.com/challenges/grid-challenge/problem
string gridChallenge(vector<string> grid) {
    
    for(int i=0;i<grid.size();i++){
       sort(grid[i].begin(),grid[i].end());
    }
    
    for(int i=0;i<grid[i].size()-1;i++){
        for(int j=0;j<grid.size();j++){
            if(grid[i][j]>grid[i+1][j]){
                return "NO";
            }
        }
    }
    
    return "YES";

}
