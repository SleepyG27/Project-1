#pragma once
#include "CircleType.h"

template <class T>
class CylinderType : public CircleType<T> {
public:
    // Default constructor
    CylinderType();

    // Constructor with height, center, and circumference points
    CylinderType(T height, PointType<T> center, PointType<T> circum);

    // Sets the height of the cylinder
    void setHeight(T height);

    // Gets the height of the cylinder
    T getHeight() const;

    // Calculates and returns the volume of the cylinder
    double calcVolume() const;

    // Calculates and returns the surface area of the cylinder
    double calcSurfaceArea() const;

    // Prints all properties of the cylinder
    void print() const;

private:
    T height;
};

template <class T>
CylinderType<T>::CylinderType() : CircleType<T>(), height(0) {}

template <class T>
CylinderType<T>::CylinderType(T h, PointType<T> center, PointType<T> circum) 
    : CircleType<T>(center, circum), height(h) {}

template <class T>
void CylinderType<T>::setHeight(T h) {
    height = h;
}

template <class T>
T CylinderType<T>::getHeight() const {
    return height;
}

template <class T>
double CylinderType<T>::calcVolume() const {
    return CircleType<T>::calcArea() * height;
}

template <class T>
double CylinderType<T>::calcSurfaceArea() const {
    return 2 * CircleType<T>::PI * CircleType<T>::calcRadius() * height + 2 * CircleType<T>::calcArea();
}

template <class T>
void CylinderType<T>::print() const {
    CircleType<T>::print();
    cout << "Height: " << height << endl;
    cout << "Volume: " << calcVolume() << endl;
    cout << "Surface Area: " << calcSurfaceArea() << endl;
}
