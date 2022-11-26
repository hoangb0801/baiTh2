#include<iostream>
using namespace std;
void nhap(int n, int a[]){
     for(int i=0; i<n; i++){
     	cin>>a[i];
	 }	
}
void xuat(int n, int a[]){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int tong(int n, int a[]){
	int count=0;
	for(int i=0; i<n; i++){
		if(a[i]>0){
		count++;	
		}
	}
	return  count;
}
void sort(int n,int a[]){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
		
}
xuat(n,a);
}
void swap(int &a,int &b){
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
}
void add(int n, int a[]){
	int x,k;
	cin>>x>>k;
	for( int i=n; i>k; i--){
		a[i]=a[i-1];
		
		}
		a[k]=x;
		n+=1;
		xuat (n,a);
	}

int main(){
	int n;
	cin>>n;
	int a[n];
	cout<< " nhap mang : ";
	nhap(n,a);
	cout<<"\n xuat mang : ";
	xuat(n,a);
    cout<<"\n tong cac gia tti duong : "<<tong(n,a);
    cout<<"\n xap xep tang dan:"  ;
	sort(n,a);
    add(n,a);
	return 0;
}
	

