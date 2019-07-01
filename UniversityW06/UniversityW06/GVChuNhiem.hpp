#ifndef GVChuNhiem_hpp
#define GVChuNhiem_hpp

#include <string>
#include "GiaoVien.hpp"

class GVChuNhiem : public GiaoVien {
protected:
    std::string m_lop_chu_nhiem;
    
public:
    ~GVChuNhiem() override = default;
    
public:
    void Nhap() override;
    void Xuat() const override;
    int32_t TienLuong() const override;
};

#endif /* GVChuNhiem_hpp */
