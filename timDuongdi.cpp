#include<iostream>
using namespace std;
bool check[1001];
vector<int>adj[1001];
int parent[1001];

void dfs(int u){
	check[u]=true;
	for(int v:adj[u]){
		if(!check[v]){
			parant[v]=u;
			dfs(v);
			
		}
	}
}
void duongdi(int s, int t){
	dfs(s);
	memset(check,false,sizeof(check));
	if(!check[t]){
		cout<<"NO";
	}
	else{
		vector<int>path;
		while(t!=s){
			path.push_back(t);
			t=parent[t];
		}
		path.push_back(s);
		reverse(path.begin(),path.end());
		for(int x:path){
			cout<<x<<" ";
		}
	}
}
int main(){


	return 0;
}
	

