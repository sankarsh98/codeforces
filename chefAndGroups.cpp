#include<iostream>
using namespace std;

int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int n=s.length();
        int g=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                g++;
                while(s[i]=='1'){
                    i++;
                }
            }
        }
        cout<<g<<endl;
    }
}