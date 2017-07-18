#include "px_child.h"
#include <iostream>
using namespace proxy;

void Child::info() {
    std::cout << "real object (proxy)\n";
}
