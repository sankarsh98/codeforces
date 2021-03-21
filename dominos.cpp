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
    int T;
    cin>>T;
    int n,a,c,w,b;
    while(T--){
        cin>>n>>a>>c>>w>>b;
        w=w-min(a,c);
        b=b-min(n-a,n-c);
        int rw,rb;
        rw=(max(a,c)-min(a,c))/2;
        rb=(max(n-a,n-c)-min((n-a),(n-c)))/2;
        w=w-rw;
        b=b-rb;
        if((w<=0) && (b<=0)){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;

    }
    return 0;
}