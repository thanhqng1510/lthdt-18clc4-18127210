#ifndef NVCongNhat_hpp
#define NVCongNhat_hpp

#include "NhanVien.hpp"

class NVCongNhat : public NhanVien {
protected:
    unsigned int m_so_gio_lam;
    
public:
    void Nhap() override;
    void Xuat() const override;
    
    inline int32_t TienLuong() const override {
        return m_so_gio_lam * 30000;
    }
};

#endif /* NVCongNhat_hpp */
