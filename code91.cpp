#include <iostream>

using namespace std ; 

int main(){
    int h , c ;
    cout << " nhap hang : ";
    cin >> h ;
    cout << " nhap cot : ";
    cin >> c ; 
    int A[h][c];
    int i , j ;
    int max1 = 0 ;
    int max2 = 0;
    for( i = 0 ; i < h ; i++ ){
        for( j = 0 ; j < c ; j++ ){
            cout << " nhap A [ " << i << " ] [ " << j << " ] ";
            cin >> A[i][j];
        }
    }
    for( i = 0 ; i < h ; i++ ){
        for( j = 0 ; j < c ; j++ ){
            if( max1 < A[i][j] ){
                max2 = max1;
                max1 = A[i][j];
            }
            else if( max1 > A[i][j] && max2 < A[i][j]){
                max2 = A[i][j];
            }
        }
    }
    cout << max2;
    return 0;
}
