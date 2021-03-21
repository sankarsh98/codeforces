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
    int n;
    cin>>n;
    int ar[n];
    int a=0,b=0,aa,bb;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]){
            b++;
        }else{
            a++;
        }
    }
    aa=a;
    bb=b;
    int p=-1,q=n-1;
    bool f=true;
    int ma=0,mb=0,max=0;
    a=0,b=0;
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            a=0;b=0;
            for(int k=i;k<=j;k++){
                if(ar[k]){ b++; }else { a++; }
            }
            if(a>b){
            int d=a-b;
            if(max<d){
                ma=a;
                mb=b;
                max=d;
            }
        }
        }
    }
    // while(p<=q){
    //     if(f){
    //         p++;
    //         if(p>0){
    //             if(ar[p-1]){
    //                 b--;
    //             }else{
    //                 a--;
    //             }
    //         }
    //     }else{
    //         q--;
    //         if(ar[q+1]){
    //             b--;
    //         }else{
    //             a--;
    //         }
    //     }
    //     // a=0,b=0;
    //     // for(int i=p;i<=q;i++){
    //     //     if(ar[i]){
    //     //         b++;
    //     //     }else{
    //     //         a++;
    //     //     }
    //     // }
    //     // cout<<a<<" "<<b<<" "<<ar[p]<<" "<<ar[q]<<" "<<endl;
    //     // while(ar[p]==1&&p<q){
    //     //     p++;
    //     //     b--;
    //     // }
    //     // while(ar[q]==1&&p<q){
    //     //     q--;
    //     //     b--;
    //     // }

    //     if(a>b){
    //         int d=a-b;
    //         if(max<d){
    //             ma=a;
    //             mb=b;
    //             max=d;
    //         }
    //     }
        
    //     f=!f;
    // }
    // cout<<bb<<" "<<mb<<" "<<ma<<" "<<max<<" "<<endl;

    int res=bb-mb+ma;
    
    if(aa==0){
        res=bb-1;
    }
    if(bb==0){
        res=aa;
    }
    cout<<res<<endl;
    return 0;
}

// 1 0 0 0 1 1 1 1 0 0 1 0 1 1 1 0
// 1. find no. of zeroes and ones a,b in duplicate aa,bb
// 2. two pointers from 0 and n-1, p,q
// 3. if s[p] is 1 move forward until p<q and s[p] is 0 
// 4. if s[q] is 1 move backward until p<q and s[q] is 0
// 5. in the previous steps update a and b accoridingly
// 6.   if b>a solution found else keep a flag as to update what next p or q taking turns. 
// 7. when solution found bb-b+a