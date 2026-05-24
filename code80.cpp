#include <iostream>

using namespace std;

int main(){
    int i ;
    int n ;
    cout << " nhap so nguyen n : "<<endl;
    cin >> n;
    int sum = 0 ;
    for( i = 0 ; i <= n ; i++ ){
        sum += i;
    }
    cout << " tong cua n so hang la : " << sum;
    return 0;
}