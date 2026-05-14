#include <iostream>
using namespace std;

int main() {
        int a ;
    int b ;
    int temp ;
    cout << " nhap so nguyen a : " <<endl;
    cin >> a ;
    cout << " nhap so nguyen b : " <<endl;
    cin >> b ;
    temp = a;
    a = b ;
    b = temp;
    cout << a <<endl;
    cout << b <<endl;
    return 0;
}
