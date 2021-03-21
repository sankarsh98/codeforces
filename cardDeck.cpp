#include<iostream>
using namespace std;
int ar[100001],mx[100001];
int main(){
    int t;
    cin>>t;
    int n;
    
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>ar[i];
            if(ar[mx[i-1]]>ar[i]){
                mx[i]=mx[i-1];
            }else{
                mx[i]=i;
            }
        }

        int ed=n,cp;
        while(ed){
            cp=mx[ed];
            for(int i=cp;i<=ed;i++) cout<<ar[i]<<" ";
            ed=cp-1;
        }

        cout<<endl;
    }

    return 0;
}