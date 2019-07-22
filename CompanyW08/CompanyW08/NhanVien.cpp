#include "NhanVien.hpp"

void NhanVien::Nhap() {
    std::cout << "Nhap id: ";
    getline(std::cin, m_id, '\n');
    std::cout << "Nhap ten: ";
    getline(std::cin, m_ten, '\n');
    std::cout << "Nhap nam vao lam: ";
    std::cin >> m_nam_vao_lam;
    std::cout << "Nhap luong co ban: ";
    std::cin >> m_luong_co_ban;
    std::cout << "Nhap thang sinh: ";
    std::cin >> m_thang_sinh;
    std::cin.ignore();
}

void NhanVien::Xuat() const {
    std::cout << "ID: " << m_id << "\n";
    std::cout << "Ten: " << m_ten << "\n";
    std::cout << "Nam vao lam: " << m_nam_vao_lam << "\n";
    std::cout << "Luong co ban: " << m_luong_co_ban << "\n";
    std::cout << "Thang sinh: " << m_thang_sinh << "\n";
}
