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
		cout<<"nhap nhan vien";
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
		cout<<"nhan vien";
		cout<<nv[i].msnv<<" ";
		cout<<nv[i].name<<" ";
		cout<<nv[i].hs<<" ";
		cout<<nv[i].lcb<<" ";
		cout<<nv[i].pc<<" ";
		cout<<nv[i].sum<< " ";	
		cout<<endl;
	}
}
int soSanhMax(NhanVien nv[],int n){
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
int soSanhMin(NhanVien nv[],int n){
	int sum=nv[0].sum;
	int chiso=0;
	for(int i=1; i<n;i++){
		if(nv[i].sum<sum){
			chiso=i;
			sum=nv[i].sum;			
		}
	}
	return chiso;
}
int main(){
	int n=3;
	struct NhanVien *nv=new NhanVien[10];
	nhap(nv,n);
    xuat(nv,n);
    int indexMax= soSanhMax(nv,n);
    int indexMin= soSanhMin(nv,n);
    cout<<"nv cao nhat : "<<nv[indexMax].name<<", sum = "<<nv[indexMax].sum;
    cout<<"nv thap nhat : "<<nv[indexMin].name<<", sum = "<<nv[indexMin].sum;
    delete []nv;
	return 0;
}
	
