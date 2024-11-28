//
// Created by Alberto Heissl on 06/11/24.
//

#ifndef VECTOR_H
#define VECTOR_H
#include <algorithm>
#include <initializer_list>

using namespace std;


class Vector {
    int sz;
    double *elem;

public:
    Vector(int s) : sz{s}, elem {new double[s]} {
        for (int i = 0; i < s; i++) {
            elem[i] = 0;
        }
    }

    Vector(const initializer_list<double> lst): sz{static_cast<int>(lst.size())}, elem{new double[sz]}
    {
        std::copy(lst.begin(), lst.end(), elem);
    }

    Vector::Vector(const Vector& arg): sz{arg.sz}, elem{new double[arg.sz]} {
        std::copy(arg.elem, arg.elem+sz, elem);
    }

    Vector& Vector::operator=(const Vector& a)
    {
        double* p = new double[a.sz]; // 1. alloca nuovo spazio
        copy(a.elem, a.elem+a.sz, p); // 2. copia gli elementi
        delete[] elem; // 3. de-alloco vecchio spazio
        elem = p; // 4. resetto puntatore
        sz = a.sz; // 5. resetto dimensione
        return *this; // 6. ritorno self-reference
    }

    ~Vector() {
        delete[] elem;
    }

    int size() const {return sz;}
};



#endif //VECTOR_H
