int check(long long int s){
   if(s<=9){
       return s;
   }
   
   long long int sum=0;
   long long int m=0;
   
   while(s!=0){
       m=s%10;
       sum+=m;
       s=s/10;
   }
   
   return check(sum);
    
}

int superDigit(string n, int k) {

long long int sum =0;

string s;


cout<<s<<"\t";
for(long long int i=0;i<n.size();i++){
   sum+=(n[i]-'0');
   cout<<sum<<"\n";
}
cout<<endl;
cout<<sum<<"\t";
return check(sum*k);
}
