#include <iostream>
using namespace std;

int dn( int n){
	int d = 0;
	while ( n != 0){
	    d = n % 10 + d * 10 ;
		n = n / 10;
	}
	return d ;
}
int main (){
	int m ;
	cout << " nhap so nguyen : ";
	cin >> m ;
	cout << " so dao nguoc la : ";
	cout << dn(m);
	return 0 ;
}
