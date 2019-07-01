#include <iostream>
#include "NVCongNhat.hpp"
#include "NVSanXuat.hpp"

int main() {
    NVSanXuat a;
    a.Nhap();
    a.Xuat();
    std::cout << a.TienLuong() << "\n";
    
    NVCongNhat b;
    std::cin >> b;
    std::cout << b << "\n" << b.TienLuong() << "\n";
}
