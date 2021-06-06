
int check(int X,int N, int num){
    if(pow(num,N)<X)
        return check(X,N,num+1)+check(X-pow(num,N),N,num+1);
    else if(pow(num,N)==X)
        return 1;
    else
        return 0;
}

int powerSum(int X, int N) {

return check(X,N,1);


}