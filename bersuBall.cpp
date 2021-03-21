#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<set>

using namespace std;

#define loop(i,a,n) for(int i=a;i<=n;i++); 

typedef unsigned long long ll;



int main(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    bool f[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
        f[i]=false;
    }
    sort(a,a+n);
    sort(b,b+m);
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(f[j]==false && abs(a[i]-b[j])<2){
                f[j]=true;
                // cout<<a[i]<<" "<<b[j]<<endl; 
                res++;
                break;
            }   
        }
    }
    cout<<res;
}

// -n boys m girls
// -sort both arrays
// -m flag array initially false, after selecting becomes true
// -for every i in n search for i-1,i,i+1 in m if its available unless they cross edges.
// -if any thing found make it true and continue with next i.