#include <iostream>

using namespace std;

int main(){
    int r , d ;
    cout << " nhap hang : ";
    cin >> r ;
    cout << " nhap cot : ";
    cin >> d ;
    int A[r][d];
    int i , j ;
    int min1 = 1000;
    int min2 = 900 ;
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < d ; j++){
            cout << " nhap A [ " << i << " ] [ " << j << " ] ";
            cin>>A[i][j];
        }
    }
    for( i = 0 ; i < r ; i++){
        for ( j = 0 ; j < d ; j++){
            if( A[i][j] < min1 ){
            	min2 = min1;
            	min1 = A[i][j];
			}
			else if( min1 > A[i][j] && min2 < A[i][j] ){
				min2 = A[i][j];
			}
        }
    }
    cout << min2;
    return 0;
}