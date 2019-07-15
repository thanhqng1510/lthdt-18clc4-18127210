#include "NVVanPhong.hpp"

void NVVanPhong::Nhap() {
    NhanVien::Nhap();
    std::cout << "Nhap so ngay lam viec: ";
    std::cin >> m_so_ngay_lam_viec;
    std::cout << "Nhap tro cap: ";
    std::cin >> m_tro_cap;
}

void NVVanPhong::Xuat() const {
    NhanVien::Xuat();
    std::cout << "So ngay lam viec: " << m_so_ngay_lam_viec << "\n";
    std::cout << "Tro cap: " << m_tro_cap << "\n";
}
