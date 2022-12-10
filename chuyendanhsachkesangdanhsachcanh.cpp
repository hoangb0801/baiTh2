#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>canh;
int main(){
    int n,m;
    cin>>n;
    for(int i=1; i<=n; i++){
    	cin.ignore();
    	string s, num;
    	getline(cin,s);
    	stringstream ss(s);
    	while(ss>>num){
    		if(i<stoi(num))
    		canh.push_back({i,stoi(num)});
		}
	}
	for(auto it :canh){
		cout<<it.first<<" "<<it.second<<endl;
		
	}

	return 0;
}
	

