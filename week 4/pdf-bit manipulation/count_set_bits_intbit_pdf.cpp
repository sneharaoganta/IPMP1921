//3.https://www.interviewbit.com/problems/count-total-set-bits/


int Solution::solve(int A) {
    if(A==0)
     return 0;
    
    else
     return(1) + solve(A&(A-1));
}
