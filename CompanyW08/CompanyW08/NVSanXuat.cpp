#include "NVSanXuat.hpp"

void NVSanXuat::Nhap() {
    NhanVien::Nhap();
    std::cout << "Nhap so san pham: ";
    std::cin >> m_so_san_pham;
}

void NVSanXuat::Xuat() const {
    NhanVien::Xuat();
    std::cout << "So san pham: " << m_so_san_pham << "\n";
}
