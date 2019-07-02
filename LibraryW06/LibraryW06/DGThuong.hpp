#ifndef DGThuong_hpp
#define DGThuong_hpp

#include "DocGia.hpp"

class DGThuong : public DocGia {
protected:
    unsigned int m_so_sach_muon;
    
public:
    void Nhap() override;
    void Xuat() const override;
    
    inline int32_t LePhi() const override {
        return 5000 * m_so_sach_muon;
    }
};

#endif /* DGThuong_hpp */
