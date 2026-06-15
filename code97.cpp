#include <iostream>
using namespace std;

void swap( int *a , int *b ){
    int t = *a;
    *a = *b ;
    *b = t ;
}

int main() {
    int a , b ; 
    cout << " nhap a : " ; 
    cin >> a ; 
    cout << " nhap n : ";
    cin >> b ;
    swap(a,b);
    cout << a <<endl;
    cout << b <<endl;
    return 0;
}
