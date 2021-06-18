class Solution {
public:
    
    
    int check(vector<vector<int>>& grid,int x,int y,int s){
	
        if(x+s>grid.size() || y+s>grid[0].size()) return 1;
		
        long sum = 0;
		
        for(int k=0; k<s ;k++){
            sum+=grid[k+x][y+k];
        }
        long sum2=0;
		 
        for(int k=0; k<s ;k++){
            sum2+=grid[x+s-1-k][y+k];
        }
		
		 
        if(sum2!=sum) return 1;
        
		
        for(int i=0 ;i<s ;i++){
            long sumrow=0;
            for(int j=0 ;j<s ;j++) sumrow+=grid[i+x][y+j];
            long sumcol=0;
            for(int j=0 ;j<s ;j++) sumcol+=grid[j+x][y+i];
  
			
            if(sumcol!=sum || sumrow!=sum) return 1;
        }
		
	
        return s;
    }
    
    
    int largestMagicSquare(vector<vector<int>>& grid) {
       int n = grid.size() , m  = grid[0].size() ;
        int ans=1;
		
        for(int i=0 ;i<n ;i++){
	       for(int j=0 ;j<m ;j++){
                for(int k=1 ;k<=min(m,n) ;k++){
                    int temp = check(grid,i,j,k);
                    ans=max(ans,temp);
                }
            }
        }
		
        return ans;
    }
};