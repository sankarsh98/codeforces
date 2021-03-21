#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;


int main(){
    int n,k;
    cin>>n;
    vector<pair<int,int > > a(n);
    for(int i=0;i<n;i++){
        cin>>k;
        a[i]=(make_pair(k,i));
    }
    sort(a.begin(),a.end());
    for(int i=0;i<=n/2;i++){
        for(int j=n-1;j>=n/2;j--){
            if(a[i].first+a[j].first==a[i+1].first+a[j-1].first){
                if(a[i].second!=a[j-1].second && a[j].second!=a[i+1].second && a[j].second!=a[j-1].second && a[j].second!=a[i].second && a[i].second!=a[i+1].second && a[j-1].second!=a[i+1].second){
                    cout<<"YES"<<endl;
                    cout<<a[i].second+1<<" "<<a[j].second+1<<" "<<a[j-1].second+1<<" "<<a[i+1].second+1<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO";
    return 0;

}