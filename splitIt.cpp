#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a,b;
    string s,r;
    while(t--){
        cin>>a>>b;
        cin>>s;
        r=s;
        reverse(r.begin(),r.end());
        if(b==0){
            cout<<"YES"<<endl;
            continue;
        }
        if(s==r){
            if(a>=2*b+1){
                cout<<"YES";
            }else{
                cout<<"NO";
            }
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}