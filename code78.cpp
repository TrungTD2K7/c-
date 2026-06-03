#include <iostream> 

using namespace std;

int main(){
    double a , b ;
    cout << " nhap so nguyen a "<<endl;
    cin >> a ;
    cout << " nhap so nguyen b "<<endl;
    cin >> b ;
    if ( a == 0 && b != 0){
        cout << " vo nghiem " <<endl;
    }
    else if ( a == 0 && b == 0){
        cout << " vo so nghiem " <<endl;
    }
    else{
        cout << " co 1 nghiem la x = " << -b / a <<endl;
    }
    return 0;
}