#ifndef NhanVien_hpp
#define NhanVien_hpp

#include <string>
#include <iostream>

class NhanVien {
protected:
    friend class CongTy;

    std::string m_id, m_ten;
    int m_nam_vao_lam, m_luong_co_ban, m_thang_sinh;
    
public:
    NhanVien() = default;
    
    inline NhanVien(const std::string& id, const std::string& ten, int nam_vao_lam, int luong_co_ban, int thang_sinh)
    : m_id(id), m_ten(ten), m_nam_vao_lam(nam_vao_lam), m_luong_co_ban(luong_co_ban), m_thang_sinh(thang_sinh) {}
        
public:
    virtual void Nhap();
    virtual void Xuat() const;
    
    virtual inline int Luong() const {
        return m_luong_co_ban;
    }
};

#endif /* NhanVien_hpp */
