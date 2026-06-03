#include <iostream> 

using namespace std;

int main(){
    int dai , rong , i , j ;
    cout << " nhap chieu dai : ";
    cin >> dai ;
    cout << " nhap chieu rong : ";
    cin >> rong ;
    for( i = 0 ; i < rong ; i++){
        for(j = 0 ; j < dai ; j++){
            cout << " * ";
        }
        cout <<endl;
    }
}