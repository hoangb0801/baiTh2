#include<bits/stdc++.h>
using namespace std;
vector<int> a[100];
int m,n,k,check[100];
void dfs(int k){
	check[k]=1;
	for(int i=0; i<a[k].size(); i++){
		int j= a[k][i];
		if(check[j]==0){
			dfs[j];
		}
	}
}
void sovle(){
	int res=0;
	cin>>n>>m;
	memset(a,0,sizeof(a));
	memset(check,0,sizeof(check));
	for(int i=1; i<=m;i++){
		int k,n;
		cin>>k>>n;
		a[k].push_back(n);
		a[n].push_back(k);
	}
	for(int i=1; i<=n; i++){
		memset(check,0,sizeof(check));
	    check[i]=1;res=0;
	    for(int j=1;j<=n;j++){
	    	if(check[j]==0){
	    		dfs(j);
	    		res++;
			}
		}
		cout<<res<<endl;
	}
}
int main(){
    int t;
    cin>>t;
    while(t--){
	 sovle();
	}
	 

	return 0;
}
	

