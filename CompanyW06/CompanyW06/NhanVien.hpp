#ifndef NhanVien_hpp
#define NhanVien_hpp

#include <string>
#include <iostream>

class NhanVien {
protected:
    std::string m_id, m_ho_ten, m_ngay_sinh, m_dia_chi;
    
public:
    friend std::ostream& operator << (std::ostream& stream, const NhanVien& nv);
    friend std::istream& operator >> (std::istream& stream, NhanVien& nv);

public:
    virtual void Xuat() const;
    virtual void Nhap();
    virtual int32_t TienLuong() const = 0;
};

#endif /* NhanVien_hpp */
