#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
#include<map>


using namespace std;

#define loop(i,a,n) for(int i=a;i<=n;i++); 

int a[100010],b[100010];
map<int,int> mm;
vector<int> res;
int main(){
    int t;
    cin>>t;
    int n,m,k;
    while(t--){
        cin>>n>>m;
        res.clear();
        mm.clear();
        int i;
        loop(i,1,n) cin>>a[i];
        loop(i,1,n) cin>>b[i];
        loop(i,1,m){
            cin>>k;
            if(mm.find(k)==mm.end()) {
                mm[k]=1; 
            }
            else {
                mm[k]++;
            }
        }
        bool is=true;
        loop(i,1,n){
            if(a[i]!=b[i]){
                if(mm.find(k)==mm.end()) {
                    is=false;
                    break;
                }
                else {
                    if(mm[k]){
                        is=false;
                        break;
                    }
                    mm[k]--;
                    res.push_back(i);
                    a[i]=b[i];
                }
            }
        }
        if(!is){
            cout<<"NO"<<endl;
            continue;
        }
        for(auto z:mm){
            while(z.second>0){
                find
            }
        }
        
    }
    return 0;
}