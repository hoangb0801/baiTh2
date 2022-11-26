#include<iostream>
using namespace std;
 // hàm hoán v? s? d?ng con tro
 void swap(int*a,int *b){
 	int t;
 	t=*a;
 	*a=*b;
 	*b=t;
 	
 	
 }
int main(){
    int x,y;
    cin>>x>>y;
    swap(&x,&y);
     cout<<x<<y;
	return 0;
}
	

