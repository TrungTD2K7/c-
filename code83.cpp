#include <iostream>

using namespace std ;

int main (){
    int i , n ;
    float s = 0 ;
    cout << " nhap n :  " ; 
    cin >> n;
    cout << " s = ";
    for ( i = 1 ; i <= n ; i ++ ){
        if ( i % 2 == 0 ){
            s = s - 1.0 / i ;
            cout << i << " - ";
        }
        else{
            s = s + 1.0 / i;
            cout << i << " + ";
        }
        cout << " tong :" << s ;
    }
    return 0;
}