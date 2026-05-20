#include <iostream>
using namespace std;

int main() {
    int d ;
	cout << " nhap diem trung binh : " ;
	cin >> d;
	if( d >= 0 && d <= 5.0 ){
		cout << " yeu ";
	}
	else if( d >= 5.0 && d <= 6.5){
		cout <<" trung binh ";
	}
	else if( d >= 6.5 && d <= 8.0 ){
		cout <<" kha ";
	}
	else if ( d >= 8.0 && d <= 10.0){
		cout <<"gioi" ;
	}
	else{
		cout << " svat ";
	}
    return 0;
}
