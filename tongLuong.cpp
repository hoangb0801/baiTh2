#include<iostream>
#include<string>
using namespace std;
struct NhanVien{
	int msnv;
	string name;
	float hs;
	float lcb;
	float pc;	
};
void nhap(NhanVien &nv){
	cin>>nv.msnv;
	cin.ignore();
	getline(cin,nv.name);
	cin>>nv.hs;
	cin>>nv.lcb;
	cin>>nv.pc;
}
void tong(NhanVien nv){
	cout<<nv.lcb * nv.hs + nv.pc;
	
}
int main(){
	struct NhanVien nv;
	nhap(nv);
	tong(nv);
	return 0;
}
	

