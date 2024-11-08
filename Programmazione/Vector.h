//
// Created by Alberto Heissl on 06/11/24.
//

#ifndef VECTOR_H
#define VECTOR_H



class Vector {
    int sz;
    double *elem;

public:
    Vector(int s) : sz{s}, elem {new double[s]} {
        for (int i = 0; i < s; i++) {
            elem[i] = 0;
        }
    }

    ~Vector() {
        delete[] elem;
    }

    int size() const {return sz;}
};



#endif //VECTOR_H
