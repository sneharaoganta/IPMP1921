
//5.https://www.hackerrank.com/challenges/between-two-sets/problem
  //Status:All test cases accepted


int getTotalX(vector<int> a, vector<int> b) {
    // Range of int goes from the LAST element of A to the LAST of B
    // (some have said it should end on the FIRST of B, but I played it safely)
    int start = a.back(), end = b.back();
    int count = 0;
    
    for(int x = start; x <= end; x++){
        // Booleans to test whether X fulfills condition
        bool a_pass = true, b_pass = true;
        
        for(const auto &ai : a){
            if(x % ai != 0){
                // If it doesn't, set flag and break out of A loop
                a_pass = false;
                break;
            }
        }
        
        // If A didn't complete successfully, continue with next integer
        if(!a_pass) continue;
        
        for(const auto &bi : b){
            if(bi % x != 0){
                // Idem A loop
                b_pass = false;
                break;
            }
        }
        
        // If both test were OK, count that integer
        if(a_pass && b_pass) count++;
        
    }
    return count;

}