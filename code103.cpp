#include <iostream>
#include <string>

using namespace std;

struct chuyenbay{
    string machuyenbay ;
    string noidi ;
    string noiden ;
    float giave ;
    int soghetrong ;
};

void nhapchuyenbay( chuyenbay ds[] , int &n){
    int m ;
    cout << " nhap chuyen bay can them : ";
    cin >> m ;
    if( m + n > 100 ){
        cout << " vuot qua gioi han "<<endl;
        return ;
    }
    for( int i = n ; i < m + n ; i++ ){
        cout << " nhap thong tin chuyen bay "<< i + 1 << " : "<<endl;
        cout << " nhap ma chuyen bay :";
        cin >> ds[i].machuyenbay ;
        cin.ignore();
        cout << " nhap noi di ";
        getline(cin,ds[i].noidi);
        cout << " nhap noi den ";
        getline(cin,ds[i].noiden);
        cout << " nhap gia ve ";
        cin >> ds[i].giave;
        cout << " nhap so ghe trong ";
        cin >> ds[i].soghetrong ;
    }
    n = n + m ;
}

void hienthidanhsach(chuyenbay ds[] , int n ){
    if ( n == 0 ){
        cout << " danh sach rong ";
        return ;
    }
    for ( int i = 0 ; i < n ; i++){
        cout << " chuyen bay " << i + 1 <<endl;
        cout << " ma chuyen bay : "<< ds[i].machuyenbay<<endl;
        cout << " noi di : " << ds[i].noidi<<endl;
        cout << " noi den : "<< ds[i].noiden<<endl;
        cout << " gia ve : "<< ds[i].giave<<endl;
        cout << " so ghe trong " <<ds[i].soghetrong<<endl;
    }
}

void timnoiden( chuyenbay ds[] , int n ){
    string Noiden;
    bool timthay = false ;
    cin.ignore();
    cout << " nhap noi den ban can tim " ;
    getline(cin,Noiden);
    for ( int i = 0 ; i < n ; i ++ ){
        if(ds[i].noiden == Noiden){
              cout << " chuyen bay " << i + 1 <<endl;
        cout << " ma chuyen bay : "<< ds[i].machuyenbay<<endl;
        cout << " noi di : " << ds[i].noidi<<endl;
        cout << " noi den : "<< ds[i].noiden<<endl;
        cout << " gia ve : "<< ds[i].giave<<endl;
        cout << " so ghe trong " <<ds[i].soghetrong<<endl;
        }
    }
    if(!timthay){
        cout << " khong co dia chi can tim "<<endl;
    }
}

void sapxepdanhsach( chuyenbay ds[] , int n ){
    for( int i = 0 ; i < n ; i ++ ){
        for(int j = i + 1 ; j < n ; j++){
            if(ds[i].giave < ds[j].giave){
                chuyenbay temp = ds[i] ;
                ds[i] = ds[j];
                ds[j] = temp ;
            }
        }
    }
    cout << " danh sach chuyen bay theo thu tu gia ve giam dan "<<endl;
    hienthidanhsach (ds , n);
}

void nhapsoghetrong( chuyenbay ds[] , int n ){
    string ma ;
    cout << " nhap ma chuyen bay " ;
    cin.ignore();
    getline(cin,ma);
    for ( int i = 0 ; i < n ; i++){
        if( ds[i].machuyenbay == ma ){
            cout << " cap nhat so ghe trong ";
            cin >> ds[i].soghetrong ;
            cout << " cap nhat thanh cong ";
            return;
        }
    }
    cout << " ma chuyen bay khong ton tai ";
}

int main(){
    chuyenbay ds[100];
    int n = 0 ;
    int choice;
    do{
        cout << " ==== HE THONG QUAN LY CHUYEN BAY ==== "<<endl;
		cout << " [1] NHAP DANH SACH CHUYEN BAY MOI " <<endl;
		cout << " [2] HIEN THI DANH SACH CHUYEN BAY "<<endl;
		cout << " [3] TIM KIEM CHUYEN BAY THEO NOI DEN "<<endl;
		cout << " [4] SAP XEP CHUYEN BAY THEO GIA VE GIAM DAN "<<endl;
		cout << " [5] CAP NHAT SO LUONG GHE TRONG CUA MOT CHUYEN BAY "<<endl;
		cout << " [0] THOAT CHUONG TRINH "<<endl;
		cin >> choice;
        
        switch( choice){
            case 1 : nhapchuyenbay(ds , n);
            break;
            case 2 : hienthidanhsach(ds , n);
            break;
            case 3 : timnoiden(ds , n);
            break;
            case 4 : sapxepdanhsach(ds , n);
            break;
            case 5 : nhapsoghetrong(ds , n);
            break;
            case 0 : 
            cout << " thoat chuong trinh !!";
            break;

        }
    }while( choice != 0 );
}