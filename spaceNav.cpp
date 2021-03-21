#include<iostream>
#include<cmath>
using namespace std;

int count(string s, char c) 
{ 
    // Count variable 
    int res = 0; 
  
    for (int i=0;i<s.length();i++) 
  
        // checking character in string 
        if (s[i] == c) 
            res++; 
  
    return res; 
} 
 
 int main(){
     int t;
     cin>>t;
     int a,b;
     string s;
     while(t--){
         cin>>a>>b;
         cin>>s;
         int n;
         bool aa,bb;
         aa=false;
         bb=false;
         if(a>0){
             n=count(s,'R');
             if(n>=a){
                 aa=true;
             }
         }else{
             n=count(s,'L');
             if(n>=abs(a)){
                 aa=true;
             }
         }
         if(b>0){
             n=count(s,'U');
             if(n>=b){
                 bb=true;
             }
         }else{
             n=count(s,'D');
             if(n>=abs(b)){
                 bb=true;
             }
         }
         if(aa&&bb){
             cout<<"YES";
         }else{
             cout<<"NO";
         }
         cout<<endl;
     }
 }