#include <iostream>
#include "NVSanXuat.hpp"

void NVSanXuat::Xuat() const {
    NhanVien::Xuat();
    std::cout << m_so_san_pham << "\n";
}

void NVSanXuat::Nhap() {
    NhanVien::Nhap();
    std::cout << "Nhap so san pham: ";
    std::cin >> m_so_san_pham;
    std::cin.ignore();
}
