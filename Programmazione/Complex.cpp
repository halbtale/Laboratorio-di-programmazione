#include "Complex.h"

Complex::Complex(int real, int imag) : r{real}, i{imag} {};
Complex::Complex() = default;

int Complex::real() const {
    return r;
}
int Complex::imag() const {
    return i;
}

std::ostream& operator<<(std::ostream& out, const Complex& a) {
    return out << a.real() << "+" <<a.imag() <<"i";
}

Complex operator+(const Complex& a, const Complex& b) {
    int realp = a.real() + b.real();
    int imagp = a.imag() + b.imag();

    return Complex{realp, imagp};
}

Complex operator+(const Complex& a, int b) {
    return a + Complex{b, 0};
}

Complex operator+(int a, const Complex& b) {
    return Complex{a, 0} + b;
}

Complex& Complex::operator=(const Complex& a) {
    r = a.real();
    i = a.imag();
    return *this;
}