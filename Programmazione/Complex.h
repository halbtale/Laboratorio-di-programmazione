#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex {
public:
    Complex();
    Complex(int real, int imag);

    int real() const;
    int imag() const;

    Complex& operator=(const Complex& a);

private:
    int r{0};
    int i{0};

};

std::ostream& operator<<(std::ostream& out, const Complex& a);
Complex operator+(const Complex& a, const Complex& b);
Complex operator+(const Complex& a, int b);
Complex operator+(int a, const Complex& b);

#endif //COMPLEX_H
