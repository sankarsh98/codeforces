#include<iostream>
using namespace std;

typedef unsigned long long ull;

int main(){

    int t;
    cin>>t;
    ull p,a,b,c,m1,m2,m3;
    while(t--){
        cin>>p>>a>>b>>c;
        m1=p%a;
        m2=p%b;
        m3=p%c;
        if(m1==0||m2==0||m3==0){
            cout<<0<<endl;
            continue;
        }
        m1=a-m1;
        m2=b-m2;
        m3=c-m3;
        if(m1<m2){
            if(m1<m3){
                cout<<m1;
            }else{
                cout<<m3;
            }
        }else{
            if(m2<m3){
                cout<<m2;
            }else{
                cout<<m3;
            }
        }
        cout<<endl;
    }
    return 0;
}