#include<iostream>
using namespace std;

int main(){
    int n,h,x,p;
    int max=0;
    cin>>n>>h>>x;
    while(n--){
        cin>>p;
        max=max>p?max:p;
    }
    if((h-x)<=max){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}