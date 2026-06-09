#include <iostream>
using namespace std;

int main() {
    int i , n ; 
    cout << " so phan tu nhap vao la : ";
    cin >> n;
    int A[i];
    int dem = 0 ;
    int sum = 0 ;
    for( i = 0 ; i < n ; i ++  ){
        cout << " nhap A [ " << i << " ] " ;
        cin >> A[i] ;
    }
    for ( i = 0 ; i < n ; i ++){
        if ( i % 2 == 0 ){
            sum = sum + A[i];
        }
    }
    cout << " tong cua cac so chan la : " << sum <<endl;
    for( i = 0 ; i < n ; i ++ ){
        if ( i % 3 == 0 ){
            cout << A[i] << " la so chia het cho 3 "<<endl;
            dem++;
        }
    }
    cout << " co " << dem << " so chia het cho 3 ";
    return 0;
}
