#ifndef NVCongNhat_hpp
#define NVCongNhat_hpp

#include "NhanVien.hpp"

class NVCongNhat : public NhanVien {
protected:
    unsigned int m_so_gio_lam;
    
public:
    void Nhap() override;
    void Xuat() const override;
    int32_t TienLuong() const override;
};

#endif /* NVCongNhat_hpp */
