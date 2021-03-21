#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    char s[n+1],t[m+1];
    int a[n+5],b[m+5];
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    for(int i=1;i<=m;i++){
        cin>>t[i];
    }
    int p=1;
    for(int i=1;i<=n;i++){
        if(p<=m&&s[i]==t[p]){
            a[p]=i;
            // cout<<"a "<<p<<" "<<i<<" ";
            p++;
        }
    }
    p=m;
    for(int i=n;i>0;i--){
        if(p&&s[i]==t[p]){
            b[p]=i;
            // cout<<"b "<<p<<" "<<i<<" ";
            p--;
        }
    }
    int ans=0;
    for(int i=1;i<m;i++){
        ans=max(ans,b[i+1]-a[i]);
    }
    cout<<ans;
    return 0;
}