#include "NhanVien.hpp"

void NhanVien::Nhap() {
    std::cout << "Nhap ten: ";
    getline(std::cin, m_ten, '\n');
    std::cout << "Nhap nam vao lam: ";
    std::cin >> m_nam_vao_lam;
    std::cout << "Nhap luong co ban: ";
    std::cin >> m_luong_co_ban;
    std::cin.ignore();
}

void NhanVien::Xuat() const {
    std::cout << "Ten: " << m_ten << "\n";
    std::cout << "Nam vao lam: " << m_nam_vao_lam << "\n";
    std::cout << "Luong co ban: " << m_luong_co_ban << "\n";
}
