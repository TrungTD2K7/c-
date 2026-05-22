// Bài 1 — Phân loại tam giác
// Nhập 3 cạnh a, b, c. Kiểm tra có tạo thành tam giác không,
//  nếu có thì phân loại: đều / cân / vuông / thường.
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