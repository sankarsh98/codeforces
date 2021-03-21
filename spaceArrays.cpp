#include<iostream>
#include<algorithm>
using namespace std;
int ar[200010];
int main(){
    int t,n,a,s=0;
    cin>>t;
    while(t--){
        cin>>n;
        s=0;
        for(int i=1;i<=n;i++){
            cin>>ar[i];
        }
        int flag=0;
        sort(ar+1,ar+n+1);
        for(int i=1;i<=n;i++){
            if(ar[i]>i){
                cout<<"Second"<<endl;
                flag=1;
                break;
            }
            if(ar[i]<i){
                s+=i-ar[i];
            }
        }
        if(flag==0){
            if(s%2==0){
            cout<<"Second";
            }else{
                cout<<"First";
            }

        }
        
        cout<<endl;
    }
}