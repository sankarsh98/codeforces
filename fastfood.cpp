//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a[4];
    int res;
    while(t--){
        res=0;
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[2]>0){
            a[2]--;
            res++;
        }
        if(a[1]>0){
            a[1]--;
            res++;
        }
        if(a[0]>0){
            a[0]--;
            res++;
        }
        if(a[2]>0&&a[1]>0){
            a[2]--;
            a[1]--;
            res++;
        }
        if(a[1]>0&&a[0]>>0){
            a[1]--;
            a[0]--;
            res++;
        }
        if(a[2]>0&&a[0]>0){
            a[2]--;
            a[0]--;
            res++;
        }
        if(a[0]*a[1]*a[2]!=0){
            res++;
        }
        cout<<res<<endl;
    }
}