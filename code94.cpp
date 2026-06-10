#include <iostream>
using namespace std;

int main(){
    int choice; 
    do{
        cout << " ===============MENU CHINH=============== "<<endl;
        cout << "[1] MENU CO BAN & DIEU KIEN "<<endl;
        cout << "[2] MENU VONG LAP & VR HINH "<<endl;
        cout << "[3] EXIT "<<endl;
        cin >> choice;
        switch(choice){
            case 1:{
                int choice2;
                do{
                    cout << " ===============MENU CHINH=============== "<<endl;
                    cout << "[1] KIEM TRA CHAN LE VA CHIA HET "<<endl;
                    cout << "[2] TINH TIEN TAXI "<<endl;
                    cout << "[3] KIEM TRA TINH HOP LE CUA NGAY THANG "<<endl;
                    cout << "[4] BACK"<<endl;
                    cin >> choice2;
                    switch(choice2){
                        case 1:{
                            int i;
                            cout << " nhap so nguyen i : ";
                            cin >> i;
                            if( i % 2 == 0){
                                if( i % 4 == 0 ){
                                    cout << " la so chan chia het cho 4"<<endl;
                                }
                                else{
                                    cout<< " la so chan "<<endl;
                                }
                            }
                            else{
                                cout<< " la so le "<<endl;
                            }
                            break;
                        }
                        case 2:{
                            float i , tien;
                            cout << " nhap quang duong ban muon di : ";
                            cin >> i ;
                            if( i > 0 && i < 1){
                                tien = 15000;
                            }
                            else if( i > 1 && i < 30 ){
                                tien = 15000 + (i - 1) * 13500;
                            }
                            else if( i >= 31 ){
                                tien = 15000 + 29 * 13500 + ( i - 30) * 11000;
                            }
                            cout << " chi phi phai tra la : "<< tien <<endl;
                            break;
                        }
                        case 3 :{
                            int ngay , thang , nam ;
                            cout << " nhap nam cua ban :";
                            cin >> nam;
                            cout << " nhap thang cua ban : ";
                            cin >> thang ;
                            switch[thang]{
                                case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
                                ngay = 31;
                                case 4 : case 6 : case 8 : case 9 : case 11 : 
                                ngay = 30;
                                case 2 :{
                                    if( nam % 4 == 0 && nam % 100 == 0 ){
                                        ngay = 29 ;
                                    }
                                    else{
                                        ngay = 28 ;
                                    }
                                }
                            }
                            cout << " nam " << nam << " thang " << thang << " co " << ngay << " ngay ";
                        }
                    }
                }while( choice2 !=4 );
                break;
            }
        }
    }while( choice != 3);
}