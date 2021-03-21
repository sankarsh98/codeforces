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

map<int,int> v;
int r1,r2;
bool isValid(int a, int b,int h, int m ){
	bool res=true;

	int mm=0;
	if(v.find(a%10)!=v.end()){
		mm=v[a%10];
		if(v.find(a/10)!=v.end()){
			mm=mm*10+v[a/10];
		}else{
			return false;		
		}
		if(mm>=m){
			return false;
		}
	}else{
		return false;
	}
	int hh=0;
	if(v.find(b%10)!=v.end()){
		hh=v[b%10];
		if(v.find(b/10)!=v.end()){
			hh=hh*10+v[b/10];
		}else{
			// hh=hh*10;
			return false;
		}
		if(hh>=h){
			return false;
		}
	}else{
		return false;
	}
	r1=a;r2=b;
	return res;
}
int main(){
    int T;
    cin>>T;
    v[0] = 0;
    v[1] = 1;
    v[2] = 5;
    v[5] = 2;
    v[8] = 8;
    int h,m;
    string s;
    int a,b;
    while(T--){
    	cin>>h>>m;
    	cin>>s;
    	a=stoi(s.substr(0,2));
    	b=stoi(s.substr(3,2));
    	bool flag=false;
    	// cout<<isValid(a,b,h,m);
    	while(!flag){
    		flag=isValid(a,b,h,m);
    		if(b+1==m){
    			b=0;
    			if(a+1==h){
    				a=0;
    			}else{
    				a=a+1;
    			}
    		}else{
    			b=b+1;
    		}	
    	}
    	printf("%02d:%02d\n",r1,r2);
    }
    return 0;
}

// 1. create an array of valid digits and its reflections, like a map, with values (0,0)(1,1)(2,5)(5,2)(8,8)
// 2. take h and m
// 3. take a and b by converting first two chars and last two chars to int
// 4. a while loop which adds one minute continuously until a solution is found.
// 5. format is always hh and mm, for outputs and inputs
// 6. 
