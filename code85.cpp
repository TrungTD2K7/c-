#include <iostream>

using namespace std ;

int main(){
	int s ; 
	cout << " nhap kich thuoc : ";
	cin >> s ;       
	int A[s] ;
	// nhap phan tu cho mang A
	int i ;
	for ( i = 0 ; i < s ; i++){
		cout << " Nhap phan tu thu " << i + 1<< ": ";
		cin >> A[i];
	}
	cout << " A = [ ";
	for ( i = 0 ; i < s ; i ++){
		cout << A[i] << " " ;
	}
	cout << " ] ";
	return 0;
}