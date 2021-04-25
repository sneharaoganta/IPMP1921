//2.https://www.interviewbit.com/problems/reverse-bits/
//Status: 120/225
//Time: O(n)


unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 
 
 unsigned int NO_OF_BITS = sizeof(A)*8;
 unsigned int reverse_A =0,i,temp;
 
 for(i=0;i<NO_OF_BITS;i++){
     temp=(A&(1 << i));
     if(temp){
         reverse_A |=(1 << ((NO_OF_BITS-1))-i);
    }
 }
 
 return reverse_A;
 
}

//Time:O(logn)

unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 
 
 unsigned int NO_OF_BITS = sizeof(A)*8-1;
 unsigned int reverse_A = A;
 
 A>>=1;
 
 while(A){
     reverse_A<<=1;
     reverse_A |=A & 1;
     A>>=1;
     NO_OF_BITS--;
 }
 
 reverse_A<<=NO_OF_BITS;
 
 return reverse_A;
 
}
