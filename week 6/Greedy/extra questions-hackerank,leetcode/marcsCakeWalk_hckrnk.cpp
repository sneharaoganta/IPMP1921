//https://www.hackerrank.com/challenges/marcs-cakewalk/problem
long marcsCakewalk(vector<int> calorie) {
    
    int j = calorie.size();
    int n = j/2;
    long min=0;
    sort(calorie.begin(), calorie.end(), greater<int>());
    for(int i=0;i<j;i++){
        min+=pow(2,i)*calorie[i];
    }
    
return min;
}