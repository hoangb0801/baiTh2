#include<iostream>
using namespace std;
// don do thi vo huong
// da do thi vo huong
// gia do thi vo huong

int n ,m; // n: dinh, m canh
int a[1001][1001];
int main(){
	cin>>n>>m;
	// nhap lan luot tung canh
	for(int i=0; i<m; i++){
		int x,y;
		cin>>x>>y;
		a[x][y]=a[y][x]=1;
	}
	// n dinh => ma tran co nxn
	for(int i=0 ; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}


	return 0;
}
	

