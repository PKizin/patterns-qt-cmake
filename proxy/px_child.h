#ifndef PX_CHILD_H
#define PX_CHILD_H

#include "px_base.h"

namespace proxy {

    class Child : public Base {
    public:
        void info() override;
    };

}

#endif
