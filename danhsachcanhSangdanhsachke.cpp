#include<iostream>
#include<vector>
using namespace std;
vector<int>adj[1001];
//adj[i] luu danh sach ke cua dinh i;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
	cin>>n>>m;
	for(int i=0; i<m; i++){
		int x, y;
		cin>>x>>y;
		adj[x].push_back(y);
		//adj[y].push_back(x);
	}
	for(int i=1; i<=n; i++){
		cout<<i<<": ";
		for(int x:adj[i]){
			cout<<x<<" ";
		}
		cout<<endl;
	}
		
	}
	
	


	return 0;
}
	

