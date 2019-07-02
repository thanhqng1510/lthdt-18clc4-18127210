#ifndef DocGia_hpp
#define DocGia_hpp

#include <string>
#include <iostream>

class DocGia {
protected:
    std::string m_id, m_ho_ten, m_ngay_het_han, m_gioi_tinh;
    
public:
    virtual void Nhap();
    virtual void Xuat() const;
    virtual int32_t LePhi() const = 0;
    
public:
    inline friend std::istream& operator >> (std::istream& stream, DocGia& dg) {
        dg.Nhap();
        return stream;
    }
    
    inline friend std::ostream& operator << (std::ostream& stream, const DocGia& dg) {
        dg.Xuat();
        return stream;
    }
};

#endif /* DocGia_hpp */
