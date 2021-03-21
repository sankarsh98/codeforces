#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

typedef vector<int> vi;
int main(){
	int t;
	cin>>t;
	int n,m;
	while(t--){
		cin>>n>>m;
		vi v;
		int c;
		for(int i=0;i<n;i++){
			cin>>c;
			v.push_back(c);
		}

		int d=m-v[0];
		int s=accumulate(v.begin()+1,v.end(),0);
		if(s<d){
			cout<<m-(s+v[0]);
		}else{
			cout<<m;
		}
		cout<<endl;

	}
}
