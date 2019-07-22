#ifndef NVQuanLy_hpp
#define NVQuanLy_hpp

#include "NhanVien.hpp"

class NVQuanLy : public NhanVien {
private:
    float m_he_so_chuc_vu;
    int m_thuong;
    
public:
    NVQuanLy() = default;
    
    inline NVQuanLy(const std::string& id, const std::string& ten, int nam_vao_lam, int luong_co_ban, int thang_sinh, float he_so_chuc_vu, int thuong)
        : NhanVien(id, ten, nam_vao_lam, luong_co_ban, thang_sinh), m_he_so_chuc_vu(he_so_chuc_vu), m_thuong(thuong) {}
        
public:
    void Nhap() override;
    void Xuat() const override;
    
    inline int Luong() const override {
        return m_luong_co_ban * m_he_so_chuc_vu + m_thuong;
    }
};

#endif /* NVQuanLy_hpp */
