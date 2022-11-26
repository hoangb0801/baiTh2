#include<iostream>
using namespace std;
void swap(int &a,int &b, int &x, int &y){
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
	x=a+b;
	y=b-a;
}
int main(){
	int a=4,b=5,x,y;
	swap(a,b,x,y);
    cout<<a<<" "<<b<<endl;
    cout<<x<<" "<<y;
    
	return 0;
}
	

