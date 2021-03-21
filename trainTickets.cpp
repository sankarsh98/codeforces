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
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    int p=min(b,a*m);
    int c=n/m;
    int res=c*p;
    int d=n%m;
    res+=min(d*a,b);
    cout<<res;
}

// n=number of rides
// m=number of rides with b rupees
// a=amount for single ride

// 1.p=find max of b and a*m
// 2.find amount of m tickets needed to complete n rides c=n/m
// 3.calculate res=c*p
// 4.calculate d=n%m
// 5.find res+=min(d*a,b)