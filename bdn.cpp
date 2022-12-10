#include<bits/stdc++.h>
using namespace std;
void bdn(){
	int n;
	cin>>n;
	queue <long long> q;
	q.push(1);
	while(1){
		long long tmp=q.front();
		if(tmp%n==0){
			cout<<tmp<<endl;
			break;
		}
		q.pop();
		q.push(tmp*10);
		q.push(tmp*10+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		bdn();
	}

	return 0;
}
	

