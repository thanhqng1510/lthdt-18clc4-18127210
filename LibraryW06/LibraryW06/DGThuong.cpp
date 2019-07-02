#include "DGThuong.hpp"

void DGThuong::Nhap() {
    DocGia::Nhap();
    std::cout << "Nhap so sach muon: ";
    std::cin >> m_so_sach_muon;
    std::cin.ignore();
}

void DGThuong::Xuat() const {
    DocGia::Xuat();
    std::cout << "Nhap so sach muon: " << m_so_sach_muon << "\n";
}
