#include <iostream>

namespace boba1 {
    void say_something() {
        std::cout << "YA EBANUTIY!!!\n";
    }
}

namespace boba2 {
    void say_something() {
        std::cout << "YA NE EBANUTIY!!!\n";
    }
}

int main() {
    boba1::say_something();
    boba2::say_something();
    return 0;
}
