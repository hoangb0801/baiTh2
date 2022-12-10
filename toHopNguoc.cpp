#include<bits/stdc++.h>
using namespace std;
int n,k, c[500];
vector< vector<int> > res;
void Res(){
	for(int i=res.size()-1;i>=0;i--){
		for(int j=0;j<res[i].size();j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
void quaylui(int i){
	int j;
	for(j=c[i-1]+1;j<=n-k+i;j++){
		c[i] = j;
		if(i==k){
        vector<int>a;
		for(int i=1;i<=k;i++) a.push_back(c[i] );
		res.push_back(a);
		
}
		else quaylui(i+1);}}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		res.clear();
		quaylui(1); 
		Res();
		
	}
	
}
