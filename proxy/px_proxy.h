#ifndef PX_PROXY_H
#define PX_PROXY_H

#include "px_base.h"

namespace proxy {

    class Child;
    class Proxy : public Base {
    public:
        ~Proxy() override;
        void info() override;
    private:
        Child* obj = nullptr;
    };

}

#endif
