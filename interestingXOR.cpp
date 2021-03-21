#include<iostream>
using namespace std;

typedef unsigned long long ull;
string binary(ull a){
    string res="";
    while(a>0){
        if(a%2){
            res="1"+res;
        }else{
            res="0"+res;
        }
        a/=2;
    }
    return res;
}
ull decimal(string s){
    ull ans=0;
    int mul=1;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='1'){
            ans+=mul;
        }
        mul*=2;
    }
    return ans;
}
int main(){
    ull n;
    int t;
    cin>>t;
    string s,r,p;
    while(t--){
        cin>>n;
        s=binary(n);
        r="1";
        p="";
        for(int i=1;i<s.length();i++){
            if(s[i]=='1'){
                r+="0";
                p+="1";
            }else{
                r+="1";
                p+="1";
            }
        }
        ull a1=decimal(r);
        ull a2=decimal(p);
        // cout<<s<<endl;
        // cout<<r<<" "<<a1<<endl;
        // cout<<p<<" "<<a2<<endl;
        cout<<a1*a2<<endl;
    }
}