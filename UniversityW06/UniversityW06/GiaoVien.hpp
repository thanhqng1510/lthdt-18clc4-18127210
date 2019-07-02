#ifndef GiaoVien_hpp
#define GiaoVien_hpp

#include <string>
#include <iostream>

class GiaoVien {
protected:
    std::string m_id, m_ho_ten;
    int32_t m_luong_co_ban;
    float m_he_so_luong;
    unsigned int m_so_ngay_nghi;
    
public:
    virtual ~GiaoVien() = default;
    
public:
    inline friend std::istream& operator >> (std::istream& stream, GiaoVien& gv) {
        gv.Nhap();
        return stream;
    }
    
    inline friend std::ostream& operator << (std::ostream& stream, const GiaoVien& gv) {
        gv.Xuat();
        return stream;
    }
    
public:
    virtual void Nhap();
    virtual void Xuat() const;
    
    inline virtual int32_t TienLuong() const {
        return m_he_so_luong * m_luong_co_ban - m_so_ngay_nghi * 100000;
    }
};

#endif /* GiaoVien_hpp */
