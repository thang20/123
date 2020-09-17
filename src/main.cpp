#include <bits/stdc++.h>
using namespace std;
 
class sinhvien
{
private:
    string ten, masinhvien;
    int tuoi;
    float diemtoan, diemvan, diemanh;
public:
    sinhvien()
    {
        this->masinhvien = "";
        this->ten = "";
        this->tuoi = 0;
        this->diemtoan = this->diemvan = this->diemanh = 0;
    }
    ~sinhvien()
    {
        this->masinhvien = "";
        this->ten = "";
        this->tuoi = 0;
        this->diemtoan = this->diemvan = this->diemanh = 0;
    }
 
    void set()
    {
        cout << "Nhap Ma Sinh Vien"; getline(cin, this->masinhvien);
        cout << "Nhap Ten: "; getline(cin, this->ten);
        cout << "Nhap Tuoi: "; cin >> this->tuoi;
        cout << "Nhap Diem Toan - Van - Anh"; cin >> this->diemtoan >> this->diemvan >> this->diemanh;
    }
 
    void get()
    {
        cout << "Ma Sinh Vien: " << this->masinhvien << endl;
        cout << "Ten: " << this->ten << endl;
        cout << "Tuoi: " << this->tuoi << endl;
        cout << "Diem Trung Bình: " << TB() << endl;
    }
 
    float TB()
    {
        return (this->diemtoan + this->diemvan + this->diemanh)/3;
    }
};
 
int main()
{
    sinhvien obj;
 
    obj.set();
    obj.get();
}