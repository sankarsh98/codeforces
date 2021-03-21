#include<iostream>
using namespace std;
typedef unsigned long long ull;

int nod(ull n){
    int res=0;
    while(n>0){
        res++;
        n/=10;
    }
    return res;
}
int main(){
    ull n;
    cin>>n;
    int c=nod(n);
    if(c<4){
        cout<<0;
    }else if(c<7){
        cout<<n-999;
    }else if(c<10){
        ull a=n-999999;
        cout<<2*a+999000;
    }else if(c<13){
        ull a=n-999999999;
        ull b=999000000;
        ull e=999000;
        cout<<3*a+2*b+e;
    }else if(c<16){
        ull a=n-999999999999;
        ull b=999000000000;
        ull e=999000000;
        ull d=999000;
        cout<<4*a+3*b+2*e+d;
    }else{
        ull k=1;
        ull a=999000000000000;
        ull b=999000000000;
        ull e=999000000;
        ull d=999000;
        cout<<5+4*a+3*b+2*e+d;
    }
    return 0;
}