#include<iostream>
#include<string>
using namespace std;
struct NhanVien{
	int msnv;
	string name;
	float hs;
	float lcb;
	float pc;
	float sum;	
};
void nhap(NhanVien nv[], int n){
	for(int i=0; i<n; i++){
		cout<<"nhap nhan vien thu :"<<i;
		cin>>nv[i].msnv;
		cin.ignore();
		getline(cin,nv[i].name);
		cin>>nv[i].hs;
		cin>>nv[i].lcb;
		cin>>nv[i].pc;
		nv[i].sum=nv[i].lcb * nv[i].hs + nv[i].pc;
		cout<<endl;
	}

}
void xuat(NhanVien nv[],int n){
	for(int i=0; i<n; i++){
		cout<<"nhap nhan vien thu :"<<i;
		cout<<nv[i].msnv<<" ";
		cout<<nv[i].name<<" ";
		cout<<nv[i].hs<<" ";
		cout<<nv[i].lcb<<" ";
		cout<<nv[i].pc<<" ";
		cout<<nv[i].sum<< " ";	
		cout<<endl;
	}
}
int soSanh(NhanVien nv[],int n){
	int sum=0;
	int chiso=0;
	for(int i=0; i<n;i++){
		if(nv[i].sum>sum){
			chiso=i;
			sum=nv[i].sum;
			
		}
	}
	return chiso;
}
//float tong(NhanVien &nv[]){
//	
//	float tong = nv.lcb * nv.hs + nv.pc;
//	return tong;
//	
//}
int main(){
	int n=3;
	struct NhanVien nv[10];
	nhap(nv,n);
//	tong(nv);
    xuat(nv,n);
    int index= soSanh(nv,n);
    cout<<"nv cao nhat"<<nv[index].name<<" "<<nv[index].sum;

	return 0;
}
	

