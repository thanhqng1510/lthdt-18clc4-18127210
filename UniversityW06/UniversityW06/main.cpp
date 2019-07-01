#include <iostream>
#include "GiaoVien.hpp"
#include "GVChuNhiem.hpp"

int main() {
    GiaoVien a;
    a.Nhap();
    a.Xuat();
    std::cout << a.TienLuong() << "\n";
}
