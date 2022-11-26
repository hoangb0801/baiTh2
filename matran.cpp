#include<iostream>
using namespace std;

void nhap(int arr[][10], int n, int m){
    cout<<"Nhap mang hai chieu: \n";
    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            cin>>arr[i][j];
        }
    }
}

void in(int a[10][10], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
                cout<<a[i][j]<<"  ";
        }
        cout<<"\n";
    }
}
int main(){
    int a[10][10];   
    int n,m;           
    cin>>n;
    cin>>m;
    nhap(a, n, m);  
    cout<<"\n Xuat: "<<endl;
    in(a, n, m);  
    return 0;
}
