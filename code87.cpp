#include <iostream>

using namespace std;

int main(){
    int dai , rong , i , j ;
    cout << " nhap chieu rong ";
    cin >> rong ;
    cout << " nhap chieu dai ";
    cin >> dai ;
    for( i = 0 ; i < rong ; i++ ){
        for( j = 0 ; j < dai ; j++ ){
            if( i == 0 || i == rong -1 || j == 0 || j == dai -1 ){
                cout << " *";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}