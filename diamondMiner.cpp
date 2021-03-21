#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;


double func(int a,int b){
    double s;
    s=sqrt(a*a+b*b);
    return s;
}


int main(){

    int t,n;
    int a,b;
    cin>>t;
    double res1=0,res2;
    vector<int> x,y;
    while(t--){
        res1=0;
        res2=0;
        cin>>n;
        for(int i=0;i<2*n;i++){
            cin>>a>>b;
            // cout<<a<<" "<<b<<endl;
            if(a==0){
                y.push_back(abs(b));
            }else{
                x.push_back(abs(a));
            }
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end(),greater<int>());

        for(int i=0;i<x.size();i++){
            res1+=func(x[i],y[i]);
            res2+=func(x[i],y[x.size()-i-1]);
        }
        res1<res2?cout<<fixed<<setprecision(15)<<res1<<endl:cout<<fixed<<setprecision(15)<<res2<<endl;
        x.clear();
        y.clear();
    }

    return 0;
}