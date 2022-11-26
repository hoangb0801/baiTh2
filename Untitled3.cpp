#include <iostream>
using namespace std;
 
int main(){
    int n;
    cout << "\nNhap n = ";
    do{
        cin >> n;
        if(n <= 0){
            cout << "\nNhap n>0 : ";
        }
    }while(n <= 0);
    
    for(int i = 1;i <= n/2;i++){
        if(n % i == 0){
            cout << i << ", ";
        }
    }
    
}
