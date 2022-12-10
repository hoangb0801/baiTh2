#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
	stack<int> a;
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s=="PUSH"){
			    int n;
				cin>>n;
				a.push(n);
			}
		if(s=="POP"){
			if(!a.empty())
				a.pop();
			}
	    if(s=="PRINT"){
	    	 if(!a.empty())
				cout<<a.top();
			else cout<<"NONE";
			cout<<endl;
			}			
			
		}  
	return 0;
}
	

