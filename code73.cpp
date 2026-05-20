#include <iostream>

using namespace std ;

int main(){
	int a ;
	cout << " nhap thang : ";
	cin >> a;
	if ( a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12 ){
		cout << " co 31 ngay  " ;
	}
	else if( a == 4 || a == 6 || a == 9 || a == 11){
		cout << " co 30 ngay ";
	}
	else if( a == 2){
		cout << " co 29 ngay ";
	}
	else {
		cout << " occho ";
	}
	return 0 ;
}