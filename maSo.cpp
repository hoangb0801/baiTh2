#include<bits/stdc++.h>
using namespace std;

int check[10]={0};
int a[10],b[10],n;

void xuatChu(){
	for(int i=1; i<=n; i++){
		cout<<char(a[i]+64);
	}
}
void xuatSo(){
	for(int i=1; i<=n; i++){
		cout<<b[i];
	}
	cout<<endl;
}
void sinhSo(int i){
	for(int j=1; j<=n; j++){
		b[i]=j;
		if(i==n){
			xuatChu();
			xuatSo();
		}
		else sinhSo(i+1);
	}
}
void sinhChu(int i){
	for(int j=1; j<=n; j++){
		if(check[j]==0){
			a[i]=j;
			check[j]=1;
			if(i==n){
				sinhSo(1);
			}
			else sinhChu(i+1);
				check[j]=0;
			
		}
	}
}
int main(){
    cin>>n;
    sinhChu(1);

	return 0;
}
	

