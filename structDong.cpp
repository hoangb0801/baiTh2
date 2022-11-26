#include<iostream>
using namespace std;

// VD1 khai báo KDL PhanSo
struct Phanso{
	int tu;
	int mau;
	}ps1,ps2;
	
//VD2 khai bao KDL Employee
struct Employee{
		char name[20]; // cac thuoc tinh
		int age;
		char role[20];
		float salary;
	};

int main(){
	// chuyen du lieu su dung kieu du lieu Employee
	struct Employee myEmployeee{
		"Nguyen Van A",
		27,
		"Nhan vien",
		300
	};	
	Employee myEmployeee2{
	    "Nguyen Van A",
		27,
		"Nhan vien",
		300
	};
	struct Phanso ps;
	Phanso ps3;
	ps3.tu=3;
	ps3.mau=2;
	cout<<ps3.tu;
	return 0;
}
	
