#include <iostream>
#include <string>
using namespace std;

class SinhVien {
public:
    string hoTen;
    int tuoi;
    double diemTB;

    // 1. Constructor mặc định (không tham số)
    SinhVien() {
        hoTen = "no name";
        tuoi = 0;
        diemTB = 0.0;
    }

    // 2. Constructor có tham số (Khởi tạo dữ liệu nhanh)
    SinhVien(string name, int age, double score) {
        hoTen = name;
        tuoi = age;
        diemTB = score;
    }
	~SinhVien(){
		
	}
    // Phương thức hiển thị thông tin
    void hienThi() {
        cout << "SV: " << hoTen << " | Tuoi: " << tuoi << " | Diem: " << diemTB << endl;
    }
};

int main() {
    // Cách cũ: Phải gán từng dòng (Rất mất thời gian nếu có 100 sinh viên)
    
    // Cách mới: Sử dụng Constructor có tham số
    SinhVien sv1("Nguyen Van A", 20, 8.5);
	
    SinhVien sv2("Tran Thi B", 19, 9.0);

    // Sử dụng Constructor mặc định
    SinhVien sv3; 

    sv1.hienThi();
    sv2.hienThi();
    sv3.hienThi();

    return 0;
}