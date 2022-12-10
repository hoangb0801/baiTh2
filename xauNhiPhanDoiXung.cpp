#include<iostream>
using namespace std;
void check(string s, int l, int r){
	int sum =0;
	while((r-l)>0){
		if(s[r-1]!=s[l-1]){
			sum++;
		}
		l++;
		r--;
	}
	if(sum==0){
		cout<<"YES";
	}
	else cout<<"NO";
}
int main(){
	string s;
	cin>>s;
	int t;
	cin>>t;
	while(t--){
		int l,r;
		cin>>l>>r;
		if(s.length()<=1){
			cout<<"YES"<<endl;
		}
		else{
		check(s,l,r);
	}
	}
}
	

