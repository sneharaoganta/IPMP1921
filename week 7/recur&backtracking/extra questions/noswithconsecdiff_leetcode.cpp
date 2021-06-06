class Solution {
public:
    
    unordered_set<int>v;
    int n1;
    
    int recurs(int n,int k,string curr)
    {
        if(n==1)
        {
      
            if(curr[0]!='0'&&curr.length()==n1)
            {
                v.insert(stoi(curr));
            }
            return 0;
        }
      
       

                int k2=(curr[0]-'0'-k);
                int k1=(curr[0]-'0')+k;
                
                string temp1=curr,temp2=curr;
                if(k1<=9&&k1>=0)
                {
                    temp1=(char)(k1+'0')+temp1;
                    recurs(n-1,k,temp1); 
                }
        
        if(k2<=9&&k2>=0)
        {       
            temp2=(char)(k2+'0')+temp2;
            recurs(n-1,k,temp2);
        }

            
        
        return 0;       
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
         n1=n;
        string s="";
        for(int i=0;i<=9;i++)
        {
            string t=s+(char)(i+'0');
            recurs(n,k,t);
            t=s;
        }
             vector<int>v1;
        
        for(auto x:v)
        {
            v1.push_back(x);
        }
        
        return v1;
    }
};