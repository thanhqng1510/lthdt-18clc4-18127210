#include <iostream>
#include "DGThuong.hpp"
#include "DGVip.hpp"

int main() {
    DGThuong a;
    a.Nhap();
    a.Xuat();
    std::cout << a.LePhi() << "\n";
    
    DGVip b;
    std::cin >> b;
    std::cout << b << b.LePhi() << "\n";
}
