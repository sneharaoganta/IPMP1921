// Complete the countApplesAndOranges function below.
//4.https://www.hackerrank.com/challenges/apple-and-orange/problem
   //Status:All test cases accepted

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    
     int m = apples.size();
    int n = oranges.size();
    int appCount=0;
    int orgCount=0;

    for(int i =0; i< m ; i++)
    {
        int appSum = a + apples[i];
        if(appSum >= s && appSum <= t)
            appCount++;
    }

    for(int i =0; i< n ; i++)
    {
        int orgSum = b + oranges[i];
        if(orgSum >= s && orgSum <= t)
            orgCount++;
    }
    cout<<appCount<<endl;
    cout<<orgCount<<endl;


}