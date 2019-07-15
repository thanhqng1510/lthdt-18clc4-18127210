#include "NVQuanLy.hpp"

void NVQuanLy::Nhap() {
    NhanVien::Nhap();
    std::cout << "Nhap he so chuc vu: ";
    std::cin >> m_he_so_chuc_vu;
    std::cout << "Nhap thuong: ";
    std::cin >> m_thuong;
}

void NVQuanLy::Xuat() const {
    NhanVien::Xuat();
    std::cout << "He so chuc vu: " << m_he_so_chuc_vu << "\n";
    std::cout << "Thuong: " << m_thuong << "\n";
}
