#include<iostream>

using namespace std;

int c[200010];
int res[200010];
int main(){
    int t;
    cin>>t;
    // cout<<t;
    int n;
    while(t--){
        cin>>n;
        // cout<<n;
        for(int i=1;i<=n;i++){
            res[i]=0;
            cin>>c[i];
            // cout<<c[i];
        }
        bool l=true;
        for(int i=n;i>0;i--){
            int a=c[i],k=0;
            l=true;
            int f=i-a;
            if((i-a)<0){
                f=0;
            }
            for(int j=i;j>f;j--){
                if(l&&c[j]+(i-j)<=a){
                    k++;
                }else{
                    l=false;
                }
                res[j]=1;
            }
            if(k) i-=k-1;
        }

        for(int i=1;i<=n;i++) cout<<res[i]<<" ";
        cout<<endl;
    }

    return 0;
}