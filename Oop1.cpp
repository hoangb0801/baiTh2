#include<iostream>
#include<string>
using namespace std;
class NhanVien{
	private:
	int maNV;
	string hoTen;
	float hs;
	float lcb;
	float pc;
	float tongLuong;
	public:
	NhanVien(int maNV,string hoTen,float hs,float lcb, float pc ){
		this->maNV=maNV;
		this->hoTen=hoTen;
		this->hs=hs;
		this->lcb=lcb;
		this->pc=pc;
		
	}
	NhanVien(){
	}
	int getMaNV(){
		return maNV+2;
	}
	void setMaNV(int maNv){
		this->maNV= maNv;
	}
	void NhapNV(NhanVien &nv){
		cin>>nv.maNV;
		cin.ignore();
		getline(cin,nv.hoTen);
		cin>>nv.hs;
		cin>>nv.lcb;
		cin>>nv.pc;
	}
	void TinhTongLuong(NhanVien nv){
		cout<<nv.hoTen<<": ";
		cout<< (nv.tongLuong=nv.lcb*nv.hs + nv.pc);
	}
};
int main(){
    int n;
    cin>>n;
	NhanVien *nhanViens= new NhanVien[n];
    for(int i=0; i<n;i++){
      	nhanViens[i].NhapNV(nhanViens[i]);
    	nhanViens[i].TinhTongLuong(nhanViens[i]);	
	}
    delete [] nhanViens; 
	return 0;
}
	
