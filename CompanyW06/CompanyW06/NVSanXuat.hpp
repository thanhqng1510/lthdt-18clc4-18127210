#ifndef NVSanXuat_hpp
#define NVSanXuat_hpp

#include "NhanVien.hpp"

class NVSanXuat : public NhanVien {
protected:
    unsigned int m_so_san_pham;
    
public:
    void Nhap() override;
    void Xuat() const override;
    int32_t TienLuong() const override;
};

#endif /* NVSanXuat_hpp */
