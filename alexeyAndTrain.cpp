#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    int a[101],b[101],ti[101];
    while(t --){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i]>>b[i];
        }
        for(int i=1;i<=n;i++){
            cin>>ti[i];
        }
        int aa=a[1],dd=0,d;
        for(int i=1;i<=n;i++){
            d=ceil((b[i]-a[i])/2.0);
            aa=dd+ti[i]+a[i];
            if((aa+d)<=b[i]){
                dd=0;
            }else{
                dd=aa+d-b[i];
            }
            // cout<<aa<<" "<<d<<" "<<b[i]+dd<<endl;
        }
        cout<<aa<<endl;
    }   
    return 0;
}