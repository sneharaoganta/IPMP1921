1.https://www.hackerrank.com/challenges/grading/problem
   Status: All test cases accepted


vector<int> gradingStudents(vector<int> grades) {
    
int i,j,p,q,r;
for(i=0;i<grades.size();i++){
    p=grades[i]%5;
        r=abs(5-p);
        q=grades[i]+r;
        
        if(grades[i]<40&&grades[i]>=38&&r<3){
            grades[i]=q;
        }
        
        

    if((grades[i])>40){
        if(r<3){
        grades[i]=q;
        }
        
    }
}

return grades;

}
