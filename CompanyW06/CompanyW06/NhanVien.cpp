#include "NhanVien.hpp"

void NhanVien::Nhap() {
    std::cout << "Nhap id: ";
    getline(std::cin, m_id, '\n');
    std::cout << "Nhap ho ten: ";
    getline(std::cin, m_ho_ten, '\n');
    std::cout << "Nhap ngay sinh: ";
    getline(std::cin, m_ngay_sinh, '\n');
    std::cout << "Nhap dia chi: ";
    getline(std::cin, m_dia_chi, '\n');
}

void NhanVien::Xuat() const {
    std::cout << m_id << ". " << m_ho_ten << ", " << m_ngay_sinh << ", " << m_dia_chi << "\n";
}

std::ostream& operator << (std::ostream& stream, const NhanVien& nv) {
    nv.Xuat();
    return stream;
}

std::istream& operator >> (std::istream& stream, NhanVien& nv) {
    nv.Nhap();
    return stream;
}
