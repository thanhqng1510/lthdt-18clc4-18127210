#include "CongTy.hpp"

CongTy::CongTy(int so_van_phong, int so_san_xuat, int so_quan_ly)
    : m_so_van_phong(so_van_phong), m_so_san_xuat(so_san_xuat), m_so_quan_ly(so_quan_ly),
      m_nhan_vien(new NhanVien*[so_van_phong + so_san_xuat + so_quan_ly]) {
          int i = 0;
          for (; i < so_van_phong; ++i)
              m_nhan_vien[i] = new NVVanPhong;
          for (; i < so_san_xuat; ++i)
              m_nhan_vien[i] = new NVSanXuat;
          for (; i < so_quan_ly; ++i)
              m_nhan_vien[i] = new NVQuanLy;
      }

CongTy::~CongTy() {
    for (int i = 0; i < m_so_van_phong + m_so_san_xuat + m_so_quan_ly; ++i)
        delete m_nhan_vien[i];
    delete[] m_nhan_vien;
}

void CongTy::Nhap() {
    for (int i = 0; i < m_so_van_phong + m_so_san_xuat + m_so_quan_ly; ++i)
        m_nhan_vien[i]->Nhap();
}

void CongTy::Xuat() const {
    for (int i = 0; i < m_so_van_phong + m_so_san_xuat + m_so_quan_ly; ++i)
        m_nhan_vien[i]->Xuat();
}

int CongTy::TongTienLuong() const {
    int total = 0;
    for (int i = 0; i < m_so_van_phong + m_so_san_xuat + m_so_quan_ly; ++i)
        total += m_nhan_vien[i]->Luong();
    return total;
}

NhanVien* CongTy::NhanVienLuongCaoNhat() const {
    int luong = -1, index = -1;
    for (int i = 0; i < m_so_van_phong + m_so_san_xuat + m_so_quan_ly; ++i)
        if (int l = m_nhan_vien[i]->Luong(); l > luong) {
            luong = l;
            index = i;
        }
    return m_nhan_vien[index];
}

void CongTy::LietKeNVLuongThapHon3Tr() const {
    for (int i = 0; i < m_so_van_phong + m_so_san_xuat + m_so_quan_ly; ++i)
        if (m_nhan_vien[i]->Luong() < 3'000'000)
            m_nhan_vien[i]->Xuat();
}

