#pragma once
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

template <class T>
class PointType {
private:
    T x;
    T y;

public:
    // Default constructor
    PointType() : x(0), y(0) { }

    // Constructor with parameters
    PointType(T ux, T uy) : x(ux), y(uy) { }

    // Setters
    void setX(T ux) { x = ux; }
    void setY(T uy) { y = uy; }
    void setPoint(T ux, T uy) { x = ux; y = uy; }

    // Getters
    T getX() const { return x; }
    T getY() const { return y; }
    void getPoint(T &ux, T &uy) const { ux = x; uy = y; }

    // Overload subtraction operator to calculate the distance
    double operator-(const PointType<T>& op2) const {
        double distance = sqrt(pow(x - op2.x, 2) + pow(y - op2.y, 2));
        return distance;
    }

    // Print the point
    void print() const {
        cout << "( " << x << " , " << y << " )" << endl;
    }
};