#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<map>

using namespace std;

#define loop(i,a,n) for(int i=a;i<=n;i++); 


int main(){
    int t;
    cin>>t;
    map<int, int> M;
    while(t--){
        M.clear();
        int n;
        cin>>n;
        int a;
        
        for(int i=0;i<n;i++){
            cin>>a;
            // cout<<a<<" ";
            if(M.find(a)==M.end()){
                M[a]=1;
            }else{
                M[a]++;
            }
        }
        while(n){
            for (auto& it : M) { 
                if(it.second!=0){
                    cout<<it.first<<" ";
                    it.second--;
                    n--;
                }
                // cout<<it.first<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}