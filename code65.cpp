#include <iostream>
using namespace std;

int main() {
    int a , b , c;
	cin >> a ;
	cin >> b ;
	cin >> c ;
	if( a == 0 ){
		if( b == 0 ){
			if ( c == 0 ){
				cout << " vo so nghiem ";
			}
			else{
				cout << " vo nghiem ";
			}
		}
		else{
			cout << " co 1 nghiem ";
		}
		
	}
	else{
		cout << "tinh delta ";
	}
    return 0;
}
