#ifndef PX_BASE_H
#define PX_BASE_H

namespace proxy {

    class Base {
    public:
        virtual ~Base();
        virtual void info() = 0;
    };

}

#endif
