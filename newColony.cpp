#include<iostream>
using namespace std;

typedef unsigned long long ll;

int ar[101];
int main(){
    int t;
    cin>>t;
    int n;
    ll k;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            cin>>ar[i];
        }
        int j=-1;
        while(k>0){
            int i=1;
            while(i<n){
                if(ar[i]<ar[i+1]){
                    ar[i]++;
                    j=i;
                    break;
                }else{
                    i++;
                }
            }
            // cout<<i<<" "<<k<<ar[i]<<" "<<endl;
            if(i==n){
                // if(k>(ar[i-1]-ar[i])){
                //     j=-1;
                // }else{
                //     j=n;
                // }
                j=-1;
                break;
            }
            k--;
        }


        cout<<j<<endl;
    }
}