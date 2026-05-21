#include <iostream>

using namespace std ;

int main(){
    double a ;
    cout << " nhap diem cua ban : ";
    cin >> a ;
    if( a >= 0 && a <=5 ){
        cout << " ĐÚP !! ";
    }
    else if( a > 5 && a <= 6.5 ){
        cout << " Trung binh ";
    }
    else if( a > 6.5 && a <= 8 ){
        cout << " Kha ";
    }
    else if( a > 8 && a <= 9 ){
        cout << " Gioi";
    }
    else if( a > 9 && a <= 10 ){
        cout << " Xuat sac";
    }
    else{
        cout << " chiu bo ";
    }
    return 0;
}
