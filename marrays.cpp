#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<map>

using namespace std;

#define loop(i,a,n) for(int i=a;i<=n;i++); 

typedef long long int ll;


int main(){
    int t,n,m,mm;
    cin>>t;
    ll a;
    map<int,int> mod;
    while(t--){
        cin>>n>>m;
        mod.clear();
        for(int i=0;i<n;i++){
            cin>>a;
            mm=a%m;
            if(mod.find(mm)==mod.end()){
                mod[mm]=1;
            }else{
                mod[mm]++;
            }
        }
        int res=0;
        if(mod[0]>0){
            res++;
        }
        // cout<<ceil(m/2)-1<<endl;
        // cout<<res;
        for(int i=1;i<m;i++){
            if(mod[i]){
               if(mod[i]==mod[m-i]){
                    res++;
                }else{
                    res+=abs(mod[i]-mod[m-i]);
                }
                mod[m-i]=0;
            }
            // cout<<res;
        }
        // if(m%2==0){
        //     if(mod.find(m/2)!=mod.end()){
        //         res++;
        //     }
        // }
//         for(auto &i:mod){
//     cout<<i.first<<" "<<i.second<<endl;
// }
//         // cout<<mod[0]<<mod[1]<<mod[2]<<mod[3];
        cout<<res<<endl;
    }
}

// 1. enter mods into a map directly from input
// 2. for loop from 1 to ceil(m/2)-1
// 3.  if map[1] == map[m-i]
//        res++;
//     else
//       res+=abs(map[1]-map[m-i])-1
// 4. if m is even
//      if m[m/2]>0
//       res++;
// 5. print result