#ifndef CongTy_hpp
#define CongTy_hpp

#include "NhanVien.hpp"
#include "NVVanPhong.hpp"
#include "NVSanXuat.hpp"
#include "NVQuanLy.hpp"

class CongTy {
private:
    NhanVien** m_nhan_vien;
    int m_so_van_phong, m_so_san_xuat, m_so_quan_ly;
    
public:
    explicit CongTy(int so_van_phong, int so_san_xuat, int so_quan_ly);
    ~CongTy();
    
public:
    void Nhap();
    void Xuat() const;
    int TongTienLuong() const;
    NhanVien* NhanVienLuongCaoNhat() const;
    void LietKeNVLuongThapHon3Tr() const;
    
    inline float LuongTrungBinh() const {
        return (float)TongTienLuong() / (m_so_van_phong + m_so_san_xuat + m_so_quan_ly);
    }
    
    inline int SoNVCongNhat() const {
        return m_so_van_phong;
    }
    
    inline int SoNVSanXuat() const {
        return m_so_san_xuat;
    }
};

#endif /* CongTy_hpp */
