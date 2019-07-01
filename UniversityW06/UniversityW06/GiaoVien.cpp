#include "GiaoVien.hpp"

std::istream& operator >> (std::istream& stream, GiaoVien& gv) {
    gv.Nhap();
    return stream;
}

std::ostream& operator << (std::ostream& stream, const GiaoVien& gv) {
    gv.Xuat();
    return stream;
}

void GiaoVien::Nhap() {
    std::cout << "Nhap ID: ";
    getline(std::cin, m_id, '\n');
    std::cout << "Nhap ho ten: ";
    getline(std::cin, m_ho_ten, '\n');
    std::cout << "Nhap luong co ban: ";
    std::cin >> m_luong_co_ban;
    std::cout << "Nhap he so luong: ";
    std::cin >> m_he_so_luong;
    std::cout << "Nhap so ngay nghi: ";
    std::cin >> m_so_ngay_nghi;
    std::cin.ignore();
}

void GiaoVien::Xuat() const {
    std::cout << "ID: " << m_id << "\n";
    std::cout << "Ho ten: " << m_ho_ten << "\n";
    std::cout << "Luong co ban: " << m_luong_co_ban << "\n";
    std::cout << "He so luong: " << m_he_so_luong << "\n";
    std::cout << "So ngay nghi: " << m_so_ngay_nghi << "\n";
}

int32_t GiaoVien::TienLuong() const {
    return m_he_so_luong * m_luong_co_ban - m_so_ngay_nghi * 100000;
}
