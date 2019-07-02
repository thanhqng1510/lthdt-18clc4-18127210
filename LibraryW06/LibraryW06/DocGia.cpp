#include "DocGia.hpp"

void DocGia::Nhap() {
    std::cout << "Nhap ID: ";
    getline(std::cin, m_id, '\n');
    std::cout << "Nhap ho ten: ";
    getline(std::cin, m_ho_ten, '\n');
    std::cout << "Nhap ngay het han: ";
    getline(std::cin, m_ngay_het_han, '\n');
    std::cout << "Nhap gioi tinh: ";
    getline(std::cin, m_gioi_tinh, '\n');
}

void DocGia::Xuat() const {
    std::cout << "ID: " << m_id << "\n";
    std::cout << "Ho ten: " << m_ho_ten << "\n";
    std::cout << "Ngay het han: " << m_ngay_het_han << "\n";
    std::cout << "Gioi tinh: " << m_gioi_tinh << "\n";
}
