#include <iostream>
using namespace std;

void snt( int n){
    bool kq = true;
    for ( int i = 2 ; i < n / 2 ; i++){
        if ( n % i == 0 ){
            kq = false;
        }
    }
    if(kq){
        cout << " la so nguyen to  ";
    }
    else{
        cout << " khong phai so nguyen to ";
    }
}
int main (){
    int m ;
    cout << " nhap so nguyen m : ";
    cin >> m ; 
    snt(m);
    return 0;
}