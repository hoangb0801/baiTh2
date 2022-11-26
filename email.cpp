#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
    string name;
    getline(cin,name);
    stringstream ss(name);
    string word, tmp;
    while(ss>>word){
    	tmp+=tolower(word[0]);
	}
	for(int i=1; i<word.size();i++){
		word[i]=tolower(word[i]);
	}
	cout<<word;
	for(int j=0;j<tmp.length()-1;j++){
	    cout<<	tmp[j];
	}
	cout<<"@ptit.vn";
	

	return 0;
}
	

