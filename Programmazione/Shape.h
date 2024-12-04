//
// Created by Alberto Heissl on 04/12/24.
//

#ifndef SHAPE_H
#define SHAPE_H
#include <initializer_list>
#include <vector>

#include "Point.h"

class Shape {
public:
    void draw() const;
    virtual void move(int dx, int dy);
    Point point(int i) const; // accesso ai punti
    int number_of_points() const;
    virtual ~Shape() { }

    Shape(const Shape&) = delete;
    Shape& operator=(const Shape&) = delete;

protected:
    Shape() = default;

    Shape(std::initializer_list<Point> lst);

    virtual void draw_lines() const;
    void add(Point p); // aggiunge un punto

private:
    std::vector<Point> points;
    Color lcolor; // dalla libreria grafica
    Line_style ls; // dalla libreria grafica
    Color fcolor; // dalla libreria grafica
};


#endif //SHAPE_H
