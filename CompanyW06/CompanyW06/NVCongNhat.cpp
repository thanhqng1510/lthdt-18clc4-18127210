#include <iostream>
#include "NVCongNhat.hpp"

void NVCongNhat::Xuat() const {
    NhanVien::Xuat();
    std::cout << m_so_gio_lam << "\n";
}

void NVCongNhat::Nhap() {
    NhanVien::Nhap();
    std::cout << "Nhap so gio lam: ";
    std::cin >> m_so_gio_lam;
    std::cin.ignore();
}

int32_t NVCongNhat::TienLuong() const {
    return m_so_gio_lam * 30000;
}

