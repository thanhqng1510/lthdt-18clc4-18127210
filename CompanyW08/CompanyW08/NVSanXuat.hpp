#ifndef NVSanXuat_hpp
#define NVSanXuat_hpp

#include "NhanVien.hpp"

class NVSanXuat : public NhanVien {
private:
    int m_so_san_pham;
    
public:
    NVSanXuat() = default;
    
    inline NVSanXuat(const std::string& ten, int nam_vao_lam, int luong_co_ban, int so_sam_pham)
        : NhanVien(ten, nam_vao_lam, luong_co_ban), m_so_san_pham(so_sam_pham) {}
    
    ~NVSanXuat() override = default;
    
public:
    void Nhap() override;
    void Xuat() const override;
    
    inline int Luong() const override {
        return m_luong_co_ban + m_so_san_pham * 2000;
    }
};

#endif /* NVSanXuat_hpp */
