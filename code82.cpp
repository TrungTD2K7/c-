# include <iostream>

using namespace std ;

int main (){
    int i , n , s ;
    cout << " nhap n :  " ; 
    cout << " s = ";
    for ( i = 1 ; i <= n ; i++){
        s = s + i;
        if ( i == n ){
            cout << i ;
        }
        else{
            cout << i << " + ";
        }
    }
    return 0;
}