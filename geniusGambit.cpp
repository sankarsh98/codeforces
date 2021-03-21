#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a,b,k;
    cin>>a>>b>>k;
    if(k>a+b-2||b==1){
        cout<<"NO";
        return 0;
    }
    if(b==0){
        cout<<"YES"<<endl;
        cout<<0<<endl<<0;
        return 0;
    }
    if(a==0){
        if(k){
            cout<<"NO";
            return 0;
        }
        cout<<"YES"<<endl;
        for(int i=0;i<b;i++) cout<<1;
        cout<<endl;
        for(int i=0;i<b;i++) cout<<1;
        return 0;
    }
    int x[a+b+5],y[a+b+5];
    for(int i=1;i<=a+b;i++){
        if(i<=b){
            x[i]=y[i]=1;
        }else{
            x[i]=y[i]=0;
        }
    }
    int c=b,n=0;
    if(k<=a){
        swap(y[b],y[b+k]);
    }else{
        while(n<k){
            swap(y[c],y[c+1]);
            c--;
            n++;
        }
    }
    cout<<"YES"<<endl;
    for(int i=1;i<=a+b;i++) cout<<x[i];
    cout<<endl;
    for(int i=1;i<=a+b;i++) cout<<y[i];

}