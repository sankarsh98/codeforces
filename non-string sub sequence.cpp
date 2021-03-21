#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s;
    int a,b,c,d;
    while(t--){
        cin>>a;
        cin>>b;
        cin>>s;
        while(b--){
            cin>>c>>d;
            //cout<<s.substr(d,a-d)<<" "<<s.substr(d-1,1)<<" "<<s.substr(d,a-d).find(s.substr(d-1,1));
            int p1=s.substr(0,c-1).find(s.substr(c-1,1));
            int p2=s.substr(d,a-d).find(s.substr(d-1,1));
            if(p1>-1||p2>-1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}