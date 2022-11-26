#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class Phanso{
	float ts,ms;
	public:
		Phanso(float r,float l);
		Phanso operator*(Phanso b){
			Phanso c;
			c.ts=ts*b.ts;
			c.ms= ms*b.ms;
			return c;
		}
		void display();
};

Phanso::Phanso(float r=0,float l=0){
	ts=r;ms=l;
}
void Phanso::display(){
	cout<<ts<<"/"<<ms<<endl;
}
int main(){
     Phanso a(-2,5);
     Phanso b(3,4);
     cout<<"tich 2 phan so: ";
     Phanso c;
     //c=a*b;
     c.display();

	return 0;
}
	
