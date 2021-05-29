//https://www.hackerrank.com/challenges/luck-balance/problem
int luckBalance(int k, vector<vector<int>> contests) {

vector<int> impt;
int impt_sum=0;
int unimpt_sum=0;

for(int i=0;i<contests.size();i++){
    if(contests[i][1]==1){
        impt.push_back(contests[i][0]);
        impt_sum+=contests[i][0];
    }
    else {
       unimpt_sum+=contests[i][0];
    }
}

sort(impt.begin(),impt.end());
int isize = impt.size();

if(k<=isize){
    for(int i = isize-k-1;i>=0;i--){
        impt_sum-=(2*impt[i]);
    }
}

return (impt_sum+unimpt_sum);

}
