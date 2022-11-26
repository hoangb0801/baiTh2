#include<iostream>
using namespace std;
struct MonHoc{
	int maMH;
	string tenMH;
	int soTC;
	
	int    diemCC;
	float  diemKT;
	float  diemThi;
	
	float diemTB;
};
struct SinhVien{
	string maSV;
	string name;
	string lop;
	int k;
//	struct MonHoc monhoc[k]; 
    MonHoc *dsMH;
    float diemTBC;
};
void nhapMH(MonHoc *dsMH,int n){
	for(int i=0; i<n; i++){
		cout<<"ma";
    	cin>>dsMH[i].maMH;
    	cin.ignore();
    	cout<<"ten";
    	getline(cin,dsMH[i].tenMH);
    	cout<<"soTC";
		cin>>dsMH[i].soTC;
	}
}
MonHoc timMH(MonHoc *dsMH,int n, int maMH){
	MonHoc kq;
	kq.maMH =-1;
	for(int i=0; i<n; i++){
		if(dsMH[i].maMH==maMH){
			return dsMH[i];
		}
	}
	return kq;
}
int main(){
    cout<<"so mon hoc : ";
	int n;
    cin>>n;
    MonHoc *dsMH = new MonHoc[n];
	nhapMH(dsMH,n);
    cout<<"so sinh vien : ";
	int m; cin>>m;
	SinhVien *dsSV= new SinhVien[m];
	for(int i=0; i<m; i++){
		cout<<"ma:";
		cin>>dsSV[i].maSV;
		cin.ignore();
		cout<<"name:";
		getline(cin,dsSV[i].name);
		cout<<"lop: ";
		getline(cin,dsSV[i].lop);
		
		int k; 
		cout<<"k:";
		cin>>k;
		dsSV[i].k=k;
		dsSV[i].dsMH= new MonHoc[k];
		int tongTC=0;
		float tongDiem=0;
		for(int j=0; j<k; j++){
			int maMH;
			MonHoc monhoc= timMH(dsMH,n,maMH);
			dsSV[i].dsMH[j]=monhoc;
			cout<<"diem CC:";
			cin>>dsSV[i].dsMH[j].diemCC;
			cout<<"diemKT:";
			cin>>dsSV[i].dsMH[j].diemKT;
			cout<<"diem thi";
			cin>>dsSV[i].dsMH[j].diemThi;
			dsSV[i].dsMH[j].diemTB=
				(dsSV[i].dsMH[j].diemCC*10)
				+(dsSV[i].dsMH[j].diemKT*20)
				+(dsSV[i].dsMH[j].diemThi*70)/100;
			tongTC +=monhoc.soTC;
			tongDiem+=dsSV[i].dsMH[j].diemTB*monhoc.soTC;
		}
		dsSV[i].diemTBC = tongDiem/tongTC;
	}
    for( int i=0; i<m; i++){
    	if(dsSV[i].diemTBC>=70){
    		cout<<dsSV[i].maSV<<" ";
    		cout<<dsSV[i].name<<" ";
    		cout<<dsSV[i].lop<<" ";
    		cout<<dsSV[i].diemTBC<<" ";
    		cout<<endl;
    		cout<<"danh sách mon : ";
    		for(int j=0; j<dsSV[i].k;j++){
    			cout<<dsSV[i].dsMH[j].maMH<<"--";
    			cout<<dsSV[i].dsMH[j].tenMH<<"--";
    			cout<<dsSV[i].dsMH[j].diemTB<<"--";
    			
			}
			cout<<endl;
		}
	}
	return 0;
}
	
