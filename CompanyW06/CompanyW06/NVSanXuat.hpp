#ifndef NVSanXuat_hpp
#define NVSanXuat_hpp

#include "NhanVien.hpp"

class NVSanXuat : public NhanVien {
protected:
    unsigned int m_so_san_pham;
    
public:
    void Nhap() override;
    void Xuat() const override;
    
    inline int32_t TienLuong() const override {
        return m_so_san_pham * 20000;
    }
};

#endif /* NVSanXuat_hpp */
