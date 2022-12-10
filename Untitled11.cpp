#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1001];
bool check[1001];
int n,m;
void dfs(int u){
	cout<<u<<" ";
	check[u]=true;
	for(int i :adj[u]){
		if(!check[i]){
			dfs(i);
		}
	}
}
int main(){
    int t;
    cin>>t;
    while(t--){
    	int u;
    	cin>>n>>m>>u;
    	for(int i=1; i<=m; i++){
    		int x,y;
    		cin>>x>>y;
			adj[x].push_back(y);
    		adj[y].push_back(x);
		}
		memset(check,false,sizeof(check));
		dfs(u);
	}

	return 0;
}
	

