#include<iostream>
using namespace std;
void kiemtralienthong(){
	int count=0;
	memset(check,false,sizeof(check));
	for(int i=1; i<=n; i++){
		if(!check[i]){
			++count;
			dfs(i);
		}
	}
	if(count==1){
		cout<<"YES";
	}
	else cout<<"NO";
}
int main(){
	return 0;
}
	

