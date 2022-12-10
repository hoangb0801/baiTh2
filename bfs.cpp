#include<bits/stdc++.h>
using namespace std;
bool check[1001];

vector<int>adj[1001];
void bfs(int u){
	queue<int>q;
	 q.push(u);
	 check[u]=true;
	 while(!q.empty()){
	 	int v = q.front();
	 	q.pop();
	 	cout<<v<<" ";
	 	for(int i: adj[v]){
	 		if(!check[i]){
	 			q.push(i);
	 			check[i]=true;
			 }
		 }
	 }
}
int main(){
    int n,m,u;
    cin>>n>>m>>u;
    for(int i=0; i<m; i++){
    	int x,y;
    	cin>>x>>y;
    	adj[x].push_back(y);
    	adj[y].push_back(x);
	}
	memset(check,false,sizeof(check));
	bfs(u);

	return 0;
}
	

