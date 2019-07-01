#include <iostream>
#include "GVChuNhiem.hpp"

void GVChuNhiem::Nhap() {
    GiaoVien::Nhap();
    std::cout << "Nhap ten lop: ";
    getline(std::cin, m_lop_chu_nhiem, '\n');
}

void GVChuNhiem::Xuat() const {
    GiaoVien::Xuat();
    std::cout << "Ten lop chu nhiem: " << m_lop_chu_nhiem << "\n";
}

int32_t GVChuNhiem::TienLuong() const {
    return GiaoVien::TienLuong() + 500000;
}
