#include <iostream>
#include <string>
using namespace std;

int giaithua( int n ){
	int kq = n ;
	for ( int i = 1 ; i < n ; i++){
		kq = kq * i ;
	}
	return kq;
}
int main(){
	int m ;
	cout << " nhap m : ";
	cin >> m;
	cout << " giai thua cua m : ";
	cout << giaithua(m); 
	return 0;
}