#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void chuanHoa(string s){
	for(int i=0; i<s.size(); i++){
    	if(s[i]>=65&& s[i]<=90){
    		s[i]+=32;
		}
	}
	s[0]=s[0]-32;
	for(int i=0; i<s.size(); i++){
    	if(s[i]==' '){
    		s[i+1]=s[i+1]-32;
		}
	}
	cout<<s;
}
int main(){
		string s;
        getline(cin,s);	
		chuanHoa(s);
	return 0;
}
	

