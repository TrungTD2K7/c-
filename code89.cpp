#include <iostream>

using namespace std ;

int main(){
    int h , c;
    cout << " nhap so hang :  ";
    cin >> h ;
    cout << " nhap so cot : ";
    cin >> c ;
    int A[h][c];
    int i , j ; 
    for( i = 0 ; i < h ; i++ ){
        for( j = 0 ; j < c ; j++ ){
            cout << " Nhap A [ " << i << " ] [ " << j << " ] ";
            cin >> A[i][j];
        }
    }
    for( i = 0 ; i < h ; i++ ){
        for ( j = 0 ; j < c ; j++ ){
            if(  A[i][j] % 2 == 0 ){
                cout << A[i][j] << " " ;
            }
            else {
                cout << 0 << " " ;
            }
        }
        cout <<endl;
    }
    return 0;
}