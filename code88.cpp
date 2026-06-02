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
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < d ; j++){
            cout << " nhap A [ " << i << " ] [ " << j << " ] ";
            cin>>A[i][j];
        }
    }
    for( i = 0 ; i < r ; i++){
        for ( j = 0 ; j < d ; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}