#include <iostream>
using namespace std;

template <typename T, typename U>
void func(T a, U b) {
    cout << a << " " << b << endl;
}

int main() {
    func<int, char>(1.1, 'a');

    return 0;
}