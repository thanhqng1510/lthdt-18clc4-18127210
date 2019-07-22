#ifndef NVVanPhong_hpp
#define NVVanPhong_hpp

#include "NhanVien.hpp"

class NVVanPhong : public NhanVien {
private:
    int m_so_ngay_lam_viec, m_tro_cap;
    
public:
    NVVanPhong() = default;
    
    inline NVVanPhong(const std::string& id, const std::string& ten, int nam_vao_lam, int luong_co_ban, int thang_sinh, int so_ngay_lam_viec, int tro_cap)
        : NhanVien(id, ten, nam_vao_lam, luong_co_ban, thang_sinh), m_so_ngay_lam_viec(so_ngay_lam_viec), m_tro_cap(tro_cap) {}
    
public:
    void Nhap() override;
    void Xuat() const override;
    
    inline int Luong() const override {
        return m_luong_co_ban + m_so_ngay_lam_viec * 100000 + m_tro_cap;
    }
};

#endif /* NVVanPhong_hpp */
