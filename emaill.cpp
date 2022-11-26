#include<iostream>
using namespace std;

int main(){
     string s;
     getline(cin,s);
     for( int i; i<s.size(); i++){
     	if(s[i]>=65&& s[i]<=90){
     		s[i]=s[i]+32;
		 }
	 }
	 int h=0;
	 for(int i=s.size()-1; i>=0; i--){
	 	
	 	if(s[i]==' '){
	 		h=i;
	 		for(int j=i+1;j<s.size();j++){
	 			cout<<s[j];
			 }
			 break;
		 }
	 
	 }
	 cout<<s[0];
	 for(int i=1;i<h; i++){
	 	if(s[i]==' '){
	 		cout<<s[i+1];
		 }
	 }
	 cout<<"@ptit.edu.vn";

	return 0;
}
	

