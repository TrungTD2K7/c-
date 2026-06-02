#include <iostream>
using namespace std;

int main() {
    int h , c ;
    cout << " nhap hang  : ";
    cin >> h;
    cout << " nhap cot ";
    cin >> c;
    int A[h][c];
    int i , j;
    int max = 0;
    for( i = 0 ; i < h ; i++){
        for( j = 0 ; j < c; j++){
            cout << " nhap A [ " << i << " ] [ " << j << " ] ";
            cin >> A[i][j];
        }
    }
    for( i = 0 ; i < h ; i++){
        for( j = 0 ; j < c ; j++){
            if( A[i][j] > max){
                max = A[i][j];
            }
        }
    }
    cout << max ;
    return 0;
}
