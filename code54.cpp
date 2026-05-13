#include <iostream>

using namespace std;

int main(){
	int a , b , c;
	cin >> a;
	cout << " Input the first integer : " << a << endl;
	cin >> b;
	cout << " Input the second integer : " << b << endl;
	cin >> c;
	cout << " Input the third integer : " << c << endl;
	cout << "Maximum value of three integers: " << max(a, max(b, c)) << endl;
	return 0;
}