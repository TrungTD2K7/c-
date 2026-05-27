#include <iostream>
using namespace std;

int main() {
    int i , s , n ;
    cout << " nhap N : ";
    cin >> n ;

    // s = 1 + 2 + 3 + ... + n 
    s = 0 ;
    for ( i = 1 ; i <= n ; i++ ){
        s = s + i ;
    }
    cout << " tong :  " << s ; 
    return 0;
}
