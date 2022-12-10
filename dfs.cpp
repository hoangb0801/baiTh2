#include<bits/stdc++.h>
using namespace std;
int n,m; // dinh, canh
vector<int>adj[1001]; // vector luu danh sach ke
bool check[1001];// danh dau dinh da duoc tham chua
void dfs(int u){
	cout<<u<<" ";
	check[u]=true;
	for(int v:adj[u]){
		if(!check[v]){
			dfs(v);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,u;
	cin>>n>>m>>u;
	// chuyen danh sach canh sang danh sach ke
	for(int i=1; i<=m; i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(check,false,sizeof(check));
    dfs(u);
    cout<<endl;
		
	}
	

	return 0;
}
	

