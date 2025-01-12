#include <memory>
#include <iostream>

int main() {
    std::unique_ptr<int[]> p ( new int(10) );

    p[5] = 10;

    std::cout << p[5];

    return 0;
}
