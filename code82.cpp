#include <iostream>

using namespace std ;

int main (){
    int i , n , s;
    s = 0 ;
    cout << " nhap n :  " ; 
    cin >> n;
    cout << " s = ";
    for ( i = 1 ; i <= n ; i++){
        s = s + i;
        if ( i == n ){
            cout << i << " = ";
        }
        else{
            cout << i << " + ";
        }
        cout << s <<endl;
    }
    return 0;
}