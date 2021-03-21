#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<set>

using namespace std;

#define loop(i,a,n) for(int i=a;i<=n;i++); 

typedef unsigned long long ll;



int main(){
    int T;
    cin>>T;
    string s;
    while(T--){
        cin>>s;
        int n=s.length();
        char p='0';
        int i;
        for(i=0;i<n;i++){
            if(s[i]=='1'){
                if(p=='1'){
                    i--;
                    break;
                }else{
                    p='1';
                }
            }else{
                p='0';
            }
        }
        p='1';
        int j;
        for( j=n-1;j>=0;j--){
            if(s[j]=='0'){
                if(p=='0'){
                    j++;
                    break;
                }else{
                    p='0';
                }
            }else{
                p='1';
            }
        }
        // cout<<i<<" "<<j<<endl;
        if(j<=i){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}