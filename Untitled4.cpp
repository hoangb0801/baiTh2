#include<iostream>
using namespace std;

void nhap(int *A,int n ){
	for(int i=0;i<n;i++){
    	cin>>A[i];
	}
}

void xuat(int *A,int n ){
	for(int i=0; i<n;i++){
		cout<<A[i]<<" ";
	}
}

int main(){
	int size;
	cin>>size;
    int *A= new int[size];
    nhap(A,size);
    cout<<endl;
    xuat(A,size);
	delete[]A;
	return 0;
}
	

