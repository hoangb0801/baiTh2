#include<bits/stdc++.h>
using namespace std;
// chuyen ma tran ke sang danh sach canh
int a[1001][1001]; // ma tran ke
vector<pair<int,int>>canh; // danh sach canh
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		for(int j=1;j<=n; j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==1&& i<j){
				canh.push_back({i,j});
			}
		}
	}
	for(auto it:canh){
		cout<<it.first<<" "<<it.second<<endl;
	}


	return 0;
}
	

