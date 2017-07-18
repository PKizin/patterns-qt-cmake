#include "px_proxy.h"
#include "px_child.h"
#include <iostream>
using namespace proxy;

Proxy::~Proxy() {
    if (obj) {
        delete obj;
        obj = nullptr;
    }
}

void Proxy::info() {
    if (!obj) {
        obj = new Child();
    }
    std::cout << "context #1 (proxy)\n";
    obj->info();
    std::cout << "context #2 (proxy)\n";
}
