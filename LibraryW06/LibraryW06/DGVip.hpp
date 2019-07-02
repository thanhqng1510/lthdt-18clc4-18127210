#ifndef DGVip_hpp
#define DGVip_hpp

#include "DocGia.hpp"

class DGVip : public DocGia {    
public:
    inline int32_t LePhi() const override {
        return 50000;
    }
};

#endif /* DGVip_hpp */
