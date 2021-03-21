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
    int n;
    cin>>n;
    ll l;
    cin>>l;
    vector<ll> v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll max=0,dif;
    for(int i=0;i<n-1;i++){
        dif=v[i+1]-v[i];
        max=max>dif?max:dif;
    }
    ll a=v[0]-0;
    ll b=l-v[n-1];
    ll c=::max(a,b);
    double d=(max*1.0)/2;
    printf("%.9f",::max((double)c,d));

    return 0;
}