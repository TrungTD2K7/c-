#include <iostream>
#include <string>
using namespace std;

void bcc(int m){
	for ( int i = 1 ; i <= 10 ; i++){
		int cc = ( i * m);
		cout << cc << " ";
	}
}
int main(){
	int n;
	cout << " nhap n : ";
	cin >> n ;
	cout << " bang cuu chuong cua n :";
	bcc(n);
	return 0;
}
