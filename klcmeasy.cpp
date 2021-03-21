#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

#define loop(i,a,n) for(int i=a;i<=n;i++); 

typedef long long int ll;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
// Returns LCM of array elements
ll findlcm(ll arr[], int n)
{
    // Initialize result
    ll ans = arr[0];
 
    // ans contains LCM of arr[0], ..arr[i]
    // after i'th iteration,
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}

int main(){
    int t;
    cin>>t;
    ll n,k;
    ll ar[]={0,0,0};
    while(t--){
        cin>>n;
        cin>>k;
        n=n-(k-3);
        for(int i=0;i<k-3;i++){
            cout<<1<<" ";
        }
        if(n%2==1){
            cout<<1<<" "<<n/2<<" "<<n/2<<endl;
        }else{
            ll lcm;
            ll d=0;
            ll a=n/2;
            do{
            a=a-1;
            d+=2;
            ar[0]=a; ar[1]=a; ar[2]=d;
             lcm=findlcm(ar,3);
            }while(lcm>n/2);
            cout<<ar[0]<<" "<<ar[1]<<" "<<ar[2]<<endl;
        }
    }
    return 0;
}