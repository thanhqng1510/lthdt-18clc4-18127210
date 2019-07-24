#include <iostream>

#include "CFolder.hpp"
#include "CFile.hpp"

int main() {
    CFolder C("C");
    CFolder System("System");
    CFolder Windows("Windows");

    CFile a_txt("a.txt", 123);
    CFile b_doc("b.doc", 456);

    System.Add(&a_txt);
    Windows.Add(&b_doc);
    C.Add(&System);
    C.Add(&Windows);
    
    std::cout << "Noi dung o dia C ->\n";
    C.Print(false);     // print hidden items or not? 1/0

    CItem* p = C.RemoveByName("System");
    std::cout << "Noi dung o dia C sau khi xoa thu muc System ->\n";
    C.Print(false);

    // CItem* p = C.FindByName("b.doc");
    // if (p)
    //     std::cout << "Tim thay tap tin b.doc trong o dia C\n";
    // else
    //     std::cout << "Khong tim thay tap tin b.doc trong o dia C\n";

    // p = C.FindByName("a.txt");
    // if (p)  
    //     std::cout << "Tim thay tap tin a.txt trong o dia C\n";
    // else
    //     std::cout << "Khong tim thay tap tin a.txt trong o dia C\n";

    // p = C.FindByName("Windows");
    // if (p) {
    //     std::cout << "Tim thay thu muc Windows trong o dia C, noi dung thu muc Windows ->\n";
    //     //p->setHidden(true,true); // set HIDDEN to folder p and all its items
    //     //p->print(0);
    //     //p->setHidden(false,true); // set UN-HIDDEN to folder p and all its items
    // }   
    // else
    //     std::cout << "Khong tim thay thu muc Windows trong o dia C\n";
}